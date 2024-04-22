#include <sys/stat.h>
#include <stdio.h>
#include <sys/sysmacros.h>

int main()
{
    printf("check headers\n");
    printf("_STAT_VER=%d\n", _STAT_VER);
    printf("major(0x1234)=%x\n", major(0x1234));
    printf("minor(0x1234)=%x\n", minor(0x1234));
    return 0;
}

