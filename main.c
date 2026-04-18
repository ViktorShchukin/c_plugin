#include <stdio.h>

#include "plugin.h"

int main(void){
	printf("Hello, World!!!\n");
	plugin* res = load_plugin("./first_plugin.so");
	unload_plugin(res);
	return 0;
}
