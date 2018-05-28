#include <iostream>
#include <thread>

void test1() 
{
	std::cout << "test1 passed\n" << std::endl;
}

int main()
{
	std::thread thread(test1);

	thread.join();

	return 0;
}
