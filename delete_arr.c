#include <stdio.h>

void main() {
	int arr[] = {1,3,5,7,8};
	int k = 3, n = 5;
	int i, j;

	printf("The original elements are :\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	j = k;

	while (j < n) {
		arr[j-1] = arr[j];
		j += 1;
	}

	n -= 1;
	printf("The array elements after deletion :\n");

	for(i = 0; i<n; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}
}