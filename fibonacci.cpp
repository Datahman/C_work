// Demonstration of parallel computing using fibonacci sequence as a learning curve.
#include<iostream>

// First case: A function returning fibo. sequence.
using namespace std;
long fib_seq (long n) {
	long result;
	if (n < 2) {
		result = n;
	} else {
		long a, b;
		a = fib_seq(n-1);
		b = fib_seq(n-2);
		result = a + b;
	}
	return result;

}


// Second case: Using lambda expression i.e func([&]{}).

long fib_lam(long n) {
	long result;
	if (n < 2 ) {
		result = n;
	} else {
	long a, b;
	([&] {
		a = fib_lam(n-1);
	}, [&] {
		b = fib_lam(n-2);
	});
	result = a + b;
	}
	return result;
}

int main (){
cout << "Fibonacci result is:" << fib_seq(8) << endl;
cout << "From paralell " << fib_lam(2) <<endl;
}
