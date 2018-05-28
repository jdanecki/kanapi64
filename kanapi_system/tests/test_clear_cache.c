#include <stdio.h>

int main()
{
	__clear_cache(0, 0);
	printf("test passed\n");
	return 0;
}

