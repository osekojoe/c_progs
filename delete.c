#include <stdio.h>

/* Deletion from a specific position */
void main() {
	int a[50], i, size, pos;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	printf("Enter elements: \n");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	printf("Array elements are: \n");
	for (i = 0; i < size; i++) {
		printf("%d\n", a[i]);
	}

	printf("Enter position in array: \n");
	scanf("%d",&pos);
	/**/
	if (pos <= 0 || pos > size) {
		printf("Invalid position");
	}
	else {
		//item = a[pos - 1] => deleted elements
		//for (i = 0; i < size - 1; i++) - del from pos 0
		for (i = pos - 1; i < size - 1; i++) {
			a[i] = a[i + 1];
		}
		size--;
	}
	printf("Array elements after deletion are: \n");
	for (i = 0; i < size; i++) {
		printf("%d", a[i]);
	}
}