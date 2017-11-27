#include "mergesort.hpp"

void merge(int a[], int low, int mid, int high) {
	int l1, l2, r1, r2, i = low;
	l1 = low;
	r1 = mid;
	l2 = mid + 1;
	r2 = high;
	int array[high + 1];
	while ((l1 <= r1) && (l2 <= r2)) {
		if (a[l1] < a[l2]) {
			array[i] = a[l1];
			i++;
			l1++;
		} else {
			array[i] = a[l2];
			i++;
			l2++;
		}
	}
	if (l1 > r1) {
		while (l2 <= r2) {
			array[i] = a[l2];
			i++;
			l2++;
		}
	}
	if (l2 > r2) {
		while (l1 <= r1) {
			array[i] = a[l1];
			i++;
			l1++;
		}
	}
	for (int x = low; x <= high; x++)
		a[x] = array[x];
	return;
}

void mergesort(int a[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		mergesort(a, low, mid);
		mergesort(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

