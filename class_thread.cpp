\\ Demonstration of calling object functions in threads.

#include <iostream>
#include <thread>

class Myclass
{
public: // To know.
	void operator()() { // To know.
		
		std::cout <<"functor\n";
	}
};

int main()
{

	//Myclass TheClass; Instantiating.
	std::thread t((TheClass())); \\ note three brackets, one to enclose object functio, by convention.
	std::cout <<"Main thread running..\n";
	t.join();
	return 0;

}
