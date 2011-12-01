## A C library to determine whether Ben Gracewood is procrastinating at a given moment in time

### Build
git clone https://github.com/redspider/libisbenprocrastinating
cd libisbenprocrastinating
make

### Usage

Only one function is exported:

#include "isbenprocrastinating.h"

void main(void) {
	if is_ben_procrastinating(time()) {
		printf("Lazy sod");
	} else {
		printf("Workin hard");
	}
}
