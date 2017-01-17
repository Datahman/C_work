// Demonstration of member initialization in a class with no default constructor.

# include <iostream>
using namespace std;
class Circle {
		double radius;
	public:
		Circle (double r) : radius(r) {} // member initialization, of 'r' only. 
		double area() {3.14 * radius * radius;}
};

class Cylinder {
		Circle base; // Circle class object.
		double height;
	public:
		Cylinder(double r, double h) : base(r), height (h) {} // Again member initialization
		double volume() {return base.area() * height;}
};

int main () {

Cylinder foo (10,20);

cout << "Foo's volume:" << foo.volume() << "\n";
//cout << "Foo's area" << foo.base.area() << "\n"; // Figure out how to access area method. 
return 0;
}
