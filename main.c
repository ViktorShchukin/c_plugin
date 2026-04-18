#include <stdio.h>

#include "plugin.h"

int main(void){
	plugin* res = load_plugin("./first_plugin.so");
	if(res == NULL){
		fprintf(stderr, "%s\n", "ERROR: res is NULL\n");
		return(3);
	}
	res->init();

	plugin* res2 = load_plugin("./second_plugin.so");
	if(res2 == NULL){
		fprintf(stderr, "%s\n", "ERROR: res2 is NULL\n");
	}
	res2->init();
	unload_plugin(res);
	return 0;
}
