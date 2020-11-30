#include <iostream>
using namespace std;

// Given sorted array, find pair of elements that sum to K(given)

int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 5, 7, 10, 11, 12, 13};
	int size = sizeof(arr) / sizeof(arr[0]);

	int k = 16;
	int r = 0, l = size - 1;
	while (r != l) {
		int curr_sum = arr[r] + arr[l];
		if (curr_sum > k) { l-- ;}
		else if (curr_sum < k) { r++ ;}
		else {
			cout << arr[r] << " & " << arr[l] << endl;
			r++;
			l--;
		}
	}
	return 0;
}