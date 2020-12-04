#include<iostream>
#include <algorithm> 
#include<ctime>
using namespace std;

// rotate matrix 90 degree

int main() {

	int a[10][10];
	int m = 3, n = 3;
	srand(time(0));

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n ; j++) {
			a[i][j] = rand() % 20;
			printf("%5i ", a[i][j]);
		}
		cout << endl;
	}

	/* rotate matrix 90 degree */

	// step 1. Reverse each row array
	for (int i = 0; i < m ; i++) {
		// reverse each row array //
		// reverse(a[i], a[i]+n); OR
		int s = 0, e = n - 1; // without STL
		while (s < e) {
			swap(a[i][s], a[i][e]);
			s++;
			e--;
		}
	}

	// step 2. Take transpose
	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n ; j++) {
			if (i < j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}


	cout << "Result: " << endl;
	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n ; j++) {
			printf("%5i ", a[i][j]);
		}

		cout << endl;
	}


	return 0;
}