#include <iostream>
#include <cstdlib>
#include <stddef.h>

int main(int argc, char * argv[])
{
	if (argv[0] != nullptr)
    {
		std::cout << "test for libstdc++  \n";
    }
    int a=EXIT_SUCCESS;
    std::cout << "a=" << a << std::endl;
	return 0;
}

