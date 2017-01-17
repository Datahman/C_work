// Demonstration of For-loop in C++

#include <iostream>
using namespace std;
int foo [] = {1,2,3,5,7};
int n, result =0;

int main ()
{
//	int n, result = 0;
	for (n=0;n<5;++n)
	{
		result += foo[n];
	}
	cout << result;
	return 0;
}
