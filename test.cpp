#include <iostream>
#include <thread>
// Example demonstrating multi-threading using Hello world.

void hello()
{
	std::cout<<"Hello you!\n";
}


int main()  // Thread count : 1
{

	std::thread t(hello);  //Thread count: 2
	std::cout <<"Now main thread is running.."; // Point of thread execution due to std::thread object [constructor].
				// Above we have initialized function hello binded to object -t of a given thread.
	//t.join(); // Wait for thread in object 't' to complete.
	t.detach(); // This disjoints the thread for infinite period, so only main runs.
	return 0;
}

