#include <iostream>
using namespace std;


void insertion_sort(int* a, int size) {

	for (int i = 1; i < size ; i++) {
		int curr = a[i];

		int j = i - 1;
		while (a[j] > curr and j > 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = curr;
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {0, 51, 2, 63, 41, 545, 6, 7, 9, 29};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	insertion_sort(arr, size);


	for (int i = 0; i < size ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}