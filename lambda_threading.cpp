// Demonstration of using lambda function [] on threads.
// Also the output suggests in-deterministic nature of thread calls.
#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>
// Demonstration of lambda fn usage on a single thread.
/*
int main()
{
	std::thread t([](){
		std::cout << "thread call\n";
	});
	std::cout << "main thread\n";
	t.join();
	return 0;

}
*/

// Demonstration of lambda function on multiple threads.

int main ()
{
	std::vector<std::thread> threads; // make a vector container storing threads [container]
	for (int i=0;i<6;i++) {
		threads.push_back(std::thread([i]()
		{
			std::cout << "Thread is running\n" << i <<"\n";
		}));
	}

	std::cout << "Main thread\n";

	// Note lambda function is of the form [](param){task}!
	// We use for_each on the lambda function [], with parameter reference to thread.
	std::for_each(threads.begin(),threads.end(),[](std::thread &r)
	{
		r.join();
	});
	return 0;
}
