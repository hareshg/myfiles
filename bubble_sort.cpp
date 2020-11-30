#include <iostream>
using namespace std;


void bubble_sort(int* a, int size) {

    for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1 ; j++) {
			if (a[j + 1] < a[j]) {
				swap(a[j + 1], a[j]);
			}
		}
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

	bubble_sort(arr, size);



	for (int i = 0; i < size ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}