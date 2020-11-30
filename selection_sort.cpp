#include <iostream>
using namespace std;


void selection_sort(int* a, int size){

	for(int i = 0; i < size-1 ; i++){
		int min_index = i;
		for(int j = i; j < size ; j++){
			if(a[j] < a[min_index]){
				min_index = j;
			}	
		}
		swap(a[i], a[min_index]);
	}
	cout << "Sorted!" << endl;
}

int main(int argc, char const *argv[])
{
	int arr[] = {0,51,2,63,41,545,6,7,9,29};
	int size = sizeof(arr)/sizeof(arr[0]);



	for(int i=0; i < size ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	selection_sort(arr, size);



	for(int i=0; i < size ; i++){
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}