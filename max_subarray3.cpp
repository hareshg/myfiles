#include <iostream>
using namespace std;

// CPP Maximum Subarray Sum - Method 3 by Kadane's algo

int main(int argc, char const *argv[])
{
	int arr[] = { -4, 1, 3, -2, 6, 2, -1, -4, -7};
	int size = sizeof(arr) / sizeof(arr[0]);
	int curr_sum = 0, max_sum = 0;

	for (int i = 0; i < size ; i++) {

		curr_sum = arr[i] + curr_sum;

		if (curr_sum < 0) curr_sum = 0;
		
		max_sum = max(max_sum, curr_sum);
	}

	cout << "Max Subarray sum: " << max_sum << endl;


	return 0;
}