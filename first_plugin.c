#include <stddef.h>

#include "plugin.h"

plugin my_plug = {
.init = NULL, .destroy= NULL, .print = NULL
};

plugin* build(void){
	return &my_plug;
}
