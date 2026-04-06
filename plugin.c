#include <stdio.h>

#include "plugin.h"


plugin* load_plugin(char* name){
	printf("load plugin %s\n", name);	
	return NULL;
}

void unload_plugin(plugin* plugin){
	printf("unload plugin\n");
}
