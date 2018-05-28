#include <iostream>
#include <future>

int main(int argc, char * argv[])
{
	std::promise<void> promise;
	std::shared_future<void> future(promise.get_future());
	future.get();
	return 0;
}

