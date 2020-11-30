#include <iostream>
using namespace std;


int bs(int* arr, int size, int key){
	// binary search
	// only for sorted array!

	int start = 0, end = size - 1;
	
	while(start <= end){

		int mid = (start+end)/2;

		if(key == arr[mid]){
			cout << "Found at index: ";
			return mid;
		}
		else if(key < arr[mid]){
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
	}
	cout << "Not found!";
	return -1;
}


int main(int argc, char const *argv[])
{
	int arr[] = {0,1,2,3,4,55,66,77,89,99};
	int size = sizeof(arr)/sizeof(arr[0]);

	int key = 55;

	cout << bs(arr, size, key) << endl;

	return 0;
}