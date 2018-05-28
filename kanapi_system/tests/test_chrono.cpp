#include <iostream>
#include <chrono>
#include <thread>

int main()
{
	auto start = std::chrono::_V2::system_clock::now();
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	auto end = std::chrono::_V2::system_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << diff.count() << std::endl;
	return 0;
}
