#include<iostream>
using namespace std;

void merge(int a[], int s, int e) {
	int arr[100] = {0};
	int mid = (s + e) / 2;
	int ai = s;
	int i = s;
	int j = mid + 1;

	while (i <= mid and j <= e) {
		if (a[i] < a[j]) arr[ai++] = a[i++];
		else arr[ai++] = a[j++];
	}

	while (i <= mid) arr[ai++] = a[i++];
	while (j <= e) arr[ai++] = a[j++];

	for (int i = s; i <= e ; i++) {
		a[i] = arr[i];
	}
}

void merge_sort(int a[], int s, int e) {
	if (s >= e) return;
	int mid = (s + e) / 2;
	merge_sort(a, s, mid);
	merge_sort(a, mid + 1, e);
	merge(a, s, e);
}

int main() {
	int a[] = {2, 1, 3, 6, 4, 0, 5, 3, 3, 3, 3, 56, 3, 3};
	int size = sizeof(a) / sizeof(a[0]);
	merge_sort(a, 0, size - 1);

	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}

	return 0;
}