// Demonstration of template class useage for parameteric polymorphism i.e different data types perform same task.

// First we demonstrate function templates, for a function template that returns the max. of two values.
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

/*
template <typename T>
inline const T& Max (const T& a, const T& b) {
	return  a < b  ?  b:a; // <-- Ternary operator. 
} // Here & represents a, and b to be read only.


int main () {
	int i = 39;
	int j = 20;
	cout << "Max(i,j): " << Max(i,j) << endl;
	
	double f2=  12.3;
	double f1= 0.43;
	cout << "Max(f2,f1)" << Max(f2,f1) << endl;

	string s1= "Hello";
	string s2 = "World";
	cout << "Max(s1,s2) " << Max(s1,s2) << endl;
	return 0;
}

*/
// Demonstration of a class template.


template <class T>
class Stack {

	private:
		vector<T> elems; // elements
	
	public:
		void push(const T &); // push element
		void pop(); // pop element
		T top() const; // return top element
		bool empty() const{
			return elems.empty();
		}

};

template <class T>
void Stack<T>::push (const T & elem) {
	// append copy of passed element
	elems.push_back(elem);
}
// Remove last element
template <class T> 
void Stack<T>::pop () {
	if (elems.empty()) {
		throw out_of_range("Empty stack");
	}
	// else remove last element
	elems.pop_back();

}	

// Print last element
template <class T> 
 T Stack<T>::top() const {
        if (elems.empty()) {
                throw out_of_range("Empty stack");
        }
        // else remove last element
       return  elems.back();

}      


int main() {
	try {

	Stack<int> Stackint; // Make int vector
	Stack<string> Stackstring; // Make string vector

	// Manipulation of int vector
	Stackint.push(7);
	cout <<  Stackint.top() <<endl;

	// Manipulation of string vector
	Stackstring.push("hello");
	cout << Stackstring.top() <<std:: endl;
	// Now remove added element, second run should throw an exception.
	Stackstring.pop();
	Stackstring.pop(); }
	catch (exception const& ex) {
		cerr << "Exception: " <<ex.what() << endl;
		return -1;
		}

}	

