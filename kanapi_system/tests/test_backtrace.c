#include <stdio.h>

int main()
{
	void * array;
	size_t size;
	
	size = backtrace(&array, 1);

	printf("test passed size = %d\n", size);
	return 0;
}

