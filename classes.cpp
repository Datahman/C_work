 // Class making practice in C++.
#include <iostream>
using namespace std;

class Rectangle {
	int width, height; // Private members
public:
	Rectangle (int,int); //Declaration of constructor function.
	//void set_values (int,int); // Declaration of m.f set_values
	int area () {return (width * height);}	

} ; // Instantiate object.

Rectangle::Rectangle (int x, int y) { // Definition of the  m.f  outside the class namespace.
	width = x;
	height = y;
}

int main () {

Rectangle rect(2,1);
Rectangle rectb(3,4);  
//rectb.set_values (5,4);
cout << "Area is:" << rect.area()<<endl;
cout << "Area b is:" << rectb.area()<<endl; 
return 0;
}
