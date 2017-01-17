// Basic demonstration of insert algorithm.
#include <iostream>
#include <cstdlib>
using namespace std;
void insertion_sort(int arr[], int length);
void print_SortedArray(int array[], int size );

int main() 
{
	int array[] = {2,43,2,1,29};
	insertion_sort(array, 5);
	print_SortedArray(array,5);
	return 0;
}

void insertion_sort(int arr[], int length)
{
	 
	for (int i = 1; i < length; i++ ) {
		int j = i - 1;
		while (j >= 0 && arr[j+1] < arr[j]) {
			int tmp;
			tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
			j--;
		}
		
	}
}

void print_SortedArray(int array[], int size) {

	for (int j=0; j < size; j++)
	{
		cout <<  array[j] << endl;
	}
}
