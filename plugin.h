#ifndef PLUGIN_H
#define PLUGIN_H

typedef struct plugin{
	int (*init)(void);
	void (*destroy)(void);
	void (*print)(void);
} plugin;

plugin* load_plugin(char* name);

void unload_plugin(plugin* plugin);


#endif
