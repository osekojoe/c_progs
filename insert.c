#include <stdio.h>

void main() {
	int a[50], size, i, num, pos;

	printf("Enter the size or array: \n");
	scanf("%d", &size);
	printf("Enter the array elements: \n");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	printf("Array elements are: \n");
	for (i = 0; i < size; i++) {
		printf("%d\n", a[i]);
	}

	printf("Enter data for insertion: \n");
	scanf("%d", &num);
	printf("Enter the position: \n");
	scanf("%d", &pos);
	
	/* insert at specific position*/
	for (i = size - 1; i >= pos - 1; i--) {
		a[i+1] = a[i];
	}
	a[pos - 1] = num;
	size++;

	/*
		//Insert at position 0
		for (i = size - 1; i >= 0; i--) {
			a[i+1] = a[i];
		}
		a[0] = num;
		size++
	*/
	printf("Array after insertion: \n");
		for (i = 0; i < size; i++) {
			printf("%d\n", a[i]);
		}
	/*
	-- insert unordered list
		a[size] = a[pos - 1] -> send elem to the end
		a[pos - 1] = num
	*/
}