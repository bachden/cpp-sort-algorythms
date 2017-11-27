//
//  main.cpp
//  sort-algorithms
//
//  Created by Bach Hoang Nguyen on 11/25/17.
//  Copyright © 2017 Bach Hoang Nguyen. All rights reserved.
//

#include <iostream>
#include <time.h>

#include "heapsort.hpp"
#include "mergesort.hpp"
#include "quicksort.hpp"
#include "bubblesort.hpp"
#include "insertionsort.hpp"

using namespace std;

void fillRandom(int* a, int length) {
	for (int i = 0; i < length; i++) {
		a[i] = rand() % length + 1;
	}
}

int main(int argc, const char * argv[]) {

	int length;
	double time;
	clock_t start, end;

	cout << "Input length: ";
	cin >> length;

	int arr[length];
	int count = 0;

	while (count++ < 10) {
		cout << "******* Run " << count << " *******\n";

		fillRandom(arr, length);
		start = clock();
		bubblesort(arr, length);
		end = clock();
		time = (end - start);
		cout << "bubble sort done after: " << time << " microseconds\n";

		fillRandom(arr, length);
		start = clock();
		mergesort(arr, 1, length);
		end = clock();
		time = (end - start);
		cout << "merge sort done after: " << time << " microseconds\n";

		fillRandom(arr, length);
		start = clock();
		insertionsort(arr, length);
		end = clock();
		time = (end - start);
		cout << "insertion sort done after: " << time << " microseconds\n";

		fillRandom(arr, length);
		start = clock();
		quicksort(arr, 1, length);
		end = clock();
		time = (end - start);
		cout << "quick sort done after: " << time << " microseconds\n";

		fillRandom(arr, length);
		start = clock();
		heapsort(arr, length);
		end = clock();
		time = (end - start);
		cout << "heap sort done after: " << time << " microseconds\n";
	}
}
