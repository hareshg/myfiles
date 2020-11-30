#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {0, 1, 2, 3, 4};
	int size = sizeof(arr) / sizeof(arr[0]);
	int count = 1;
	for (int i = 0; i < size ; i++) {

		for (int j = i; j < size; j++) {
			cout << count++ << ". ";
			for (int k = i; k <= j; k++) {
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}