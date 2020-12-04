#include<iostream>
#include <ctime>
using namespace std;

// spiral print

int main() {

	int a[10][10];
	int m = 5, n = 3;
	srand(time(0));

	for (int i = 0; i < m ; i++) {
		for (int j = 0; j < n ; j++) {
			a[i][j] = rand() % 20;
			printf("%5i ", a[i][j]);
		}

		cout << endl;
	}

	// spiral print

	int startRow = 0;
	int endRow = m - 1;
	int startCol = 0;
	int endCol = n - 1;


	while (startRow <= endRow and startCol <= endCol ) {

		for (int i = startCol; i <= endCol ; i++) {
			cout << a[startRow][i] << " ";
		}
		startRow++;

		for (int i = startRow; i <= endRow ; i++) {
			cout << a[i][endCol] << " " ;
		}
		endCol--;

		if (startRow < endRow) {
			for (int i = endCol; i >= startCol ; i--) {
				cout << a[endRow][i] << " ";
			}
			endRow--;
		}

		if (startCol < endCol) {
			for (int i = endRow; i >= startRow ; i--) {
				cout << a[i][startCol] << " ";
			}
			startCol++;
		}
	}

	return 0;
}