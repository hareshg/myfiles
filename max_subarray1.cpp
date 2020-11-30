#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = { -4, 1, 3, -2, 6, 2, -1, -4, -7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, b, sum = 0;
	int max_sum = arr[0];
	for (int i = 0; i < size ; i++) {

		for (int j = i; j < size; j++) {
			sum = 0;
			for (int k = i; k <= j; k++) {
				sum += arr[k];
			}
			if (sum > max_sum) {
				max_sum = sum;
				a = i, b = j;
			}
		}
	}

	for (int i = a; i <= b ; i++) cout << arr[i]  << " ";
	cout << endl << "Max Subarray sum: "<< max_sum << endl;


	return 0;
}