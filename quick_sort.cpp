#include<iostream>
using namespace std;

int partition(int a[], int s, int e) {

	int pivot = a[s];
	int smallerThanPivotCount = 0;

	for (int i = s; i <= e ; i++) {
		if (a[i] < pivot) smallerThanPivotCount++;
	}
	int p = s + smallerThanPivotCount;
	swap(a[s], a[p]);
	int i = s, j = e;

	while (i <= p - 1 && j >= p + 1) {
		if (a[i] < pivot) i++;
		else if (a[j] >= pivot) j--;
		else {
			swap(a[i], a[j]);
			i++; j--;
		}
	}

	return p;

}

void qs(int a[], int s, int e) {
	if (s >= e) return; //base

	int p = partition(a, s, e);
	qs(a, s, p - 1);
	qs(a, p + 1, e);
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 0, 0, 0};
	int size = sizeof(a) / sizeof(a[0]);
	qs(a, 0, size - 1);

	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}

	return 0;
}