#include <stddef.h>
#include <stdio.h>

#include "plugin.h"

int my_init();
void my_destroy();
void my_print();

plugin my_plug = {
.init = my_init, .destroy= my_destroy, .print = my_print
};

plugin* build(void){
	return &my_plug;
}

int my_init(){
	printf("second_plugin: my_init is ready\n");
	return 1;
}

void my_destroy(){
	printf("second_plugin: my_destroy is ready\n");
}

void my_print(){
	printf("second_plugin: my_print is ready\n");
}
