#include <stdio.h>

main() {
	int arr[] = {1,3,5,7,8};
	int i = 0, n = 5;
	int item = 10, k = 3, j = n;

	printf("The original elements are :\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	n += 1;

	while (j >= k) {
		arr[j+1] = arr[j];
		j -= 1;
	}

	arr[k] = item;

	printf("The elements after insertion are :\n");

	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}
}