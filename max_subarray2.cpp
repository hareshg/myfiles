#include <iostream>
using namespace std;

// CPP Maximum Subarray Sum - Method 2 by cummulative sum

int main(int argc, char const *argv[])
{
	int arr[] = { -4, 1, 3, -2, 6, 2, -1, -4, -7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int a, b, sum = 0;
	int max_sum = arr[0];

	int csum[size] = {0};
	csum[0] = arr[0];
	for(int i=1; i < size; i++){
		csum[i] = csum[i-1] + arr[i];
	}
	for (int i = 0; i < size ; i++) {
		for (int j = i; j < size; j++) {
			sum = 0;
			sum = csum[j] - csum[i-1] ;
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