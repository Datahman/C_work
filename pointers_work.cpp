//: Pointers demonstration in C++.


#include <iostream>

using namespace std;


void f (int* p) { 

cout <<  "memory of p is:" <<p << endl; // Prints pointer -p memory location.
cout << "pointer value:" << *p << endl;
 *p =2; // Dereferring step.
}
main () {
	int x = 50; 
	cout << "x:" << x << endl;
	cout << "&x" << &x << endl;
	f(&x); // int * p = &x !
	
	cout << "Now derence value shoudl be : " << x << endl;

}
