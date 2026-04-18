#include <stdio.h>
#include <dlfcn.h>

#include "plugin.h"


plugin* load_plugin(char* name){
	printf("load plugin %s\n", name);

	void *handle;
	handle = dlopen(name, RTLD_NOW | RTLD_LOCAL);
	if(handle == NULL){
		fprintf(stderr, "%s\n", dlerror());
		return NULL;
	}
	printf("plugin: %p\n", handle);

	dlerror();
	plugin* (*build)(void) = dlsym(handle, "build");
	if(build == NULL){
		fprintf(stderr, "%s\n", dlerror());
		return NULL;
	}

	printf("build function pointer: %p\n", build);


	plugin* res = build();
	printf("my plugin : %p {.init = %p, .destroy = %p, .print = %p}\n", res, res->init, res->destroy, res->print);
	return res;
}

void unload_plugin(plugin* plugin){
	printf("unload plugin\n");
}
