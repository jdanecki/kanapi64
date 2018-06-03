#include <stdio.h>
#include <execinfo.h>

int main()
{
	void * array;
	size_t size;
	
	size = backtrace(&array, 1);

	printf("test passed size = %lu\n", size);
	return 0;
}

