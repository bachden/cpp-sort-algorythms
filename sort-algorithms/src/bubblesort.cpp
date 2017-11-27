#include "bubblesort.hpp"

void bubblesort(int a[], int n) {

	int j, i;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j >= i; j--) {
			if (a[j] < a[j - 1]) {
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
}
