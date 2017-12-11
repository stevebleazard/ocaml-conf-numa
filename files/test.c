#include <numa.h>
#ifndef _NUMA_H
#error "No NUMA header"
#endif

void test(void) {
	numa_available();
}
