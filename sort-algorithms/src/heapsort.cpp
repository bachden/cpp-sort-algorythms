#include "heapsort.hpp"

void heapify(int a[], int n, int vt) {
	while (vt <= n / 2 - 1) {
		int con1 = 2 * vt + 1;
		int con2 = 2 * vt + 2;
		int lc = con1;
		if (con2 < n && a[2] > a[lc]) {
			lc = con2;
		}
		if (a[vt] < a[lc]) {
			swap(a[vt], a[lc]);
		}
		vt = lc;
	}
}

void buildheap(int a[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);
	}
}

void heapsort(int a[], int n) {
	buildheap(a, n);
	for (int i = n - 1; i > 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}
