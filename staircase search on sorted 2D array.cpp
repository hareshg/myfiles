#include <iostream>
#include <ctime>
using namespace std;

int main() {

	int a[10][10];
	int m = 3, n = 3;
	//srand(time(0));
	int k = 0;

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n ; j++) {
			k = rand() % 20 + k;
			a[i][j] = k;
			printf("%5i ", a[i][j]);
		}
		cout << endl;
	}

	// staircase search on sorted 2D array
	int key = 71;
	int i = 0, j = n - 1;

	while (i < m and j >= 0) {
		if (a[i][j] > key) {
			j--;
		}
		else if (a[i][j] < key) {
			i++;
		}
		else {
			cout << "found! at: " << i << ", " << j << endl;
			break;
		}
	}

	return 0;
}