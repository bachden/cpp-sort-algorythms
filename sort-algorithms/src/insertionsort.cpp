#include "insertionsort.hpp"

void insertionsort(int a[], int n) {
	int i;
	for (i = 1; i < n; i++) {
		int x, j;
		x = a[i];
		j = i - 1;
		while (x < a[j] && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}
