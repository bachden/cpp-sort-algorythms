#include "heapsort.hpp"

void quicksort(int a[], int l, int r) {
	if (l <= r) {
		int key = a[(l + r) / 2];
		int i = l;
		int j = r;

		while (i <= j) {
			while (a[i] < key)
				i++;
			while (a[j] > key)
				j--;

			if (i <= j) {
				swap(a[i], a[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			quicksort(a, l, j);
		if (r > i)
			quicksort(a, i, r);
	}
}
