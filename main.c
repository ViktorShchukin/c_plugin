#include <stdio.h>

#include "plugin.h"

int main(void){
	printf("Hello, World!!!\n");
	plugin* res = load_plugin("my_first_plugin");
	unload_plugin(res);
	return 0;
}
