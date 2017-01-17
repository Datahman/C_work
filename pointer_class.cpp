// Demonstration of pointer usage in Classes.
#include <iostream>

using namespace std;

class Rectangle {
		int width, height;
	public:
		Rectangle(int x, int y): width(x), height(y) {}
		int area(void) {return width * height;} // Figure out what void does.
};

int main () {
	Rectangle obj (3,4);
	Rectangle * foo, *bar, *me; // Pointers [Declaration?] to object foo of class Rectangle.

	// Pointer definitions... 

	foo = &obj; 
	bar = new Rectangle (5,6); // New pointer definitions with unique parameters!
	me = new Rectangle[2] { {3,4} , {1,2} };

	// Print statements...
	cout <<  "Memory addresses:" << long(foo) <<"\n"<< long(bar) << "\n"<<long(me) ; // This line indicates first pointer to be large in size than 'New' pointers.
	cout << "obj's area: " << obj.area() << "\n";
	cout << "foo's area: " << foo->area() << "\n"; // '->' for pointers to call class methods.
	cout << "bar's area: "  << bar->area() << "\n";
	cout << "First me's area: " <<  me[0].area() << "\n";
	cout << "Second me's area:" << me[1].area() << "\n";
	delete bar;
	delete [] me;
	return 0;
 }
