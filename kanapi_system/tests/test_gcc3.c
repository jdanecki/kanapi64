#include <stdio.h>
#include <fcntl.h>

int main()
{
    int flags = fcntl(1, F_GETFL);
    printf("flags=%d\n", flags);
    return 0;
}

