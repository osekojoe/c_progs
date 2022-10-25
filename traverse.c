#include <stdio.h>

void main() {
	int a[50], size, i;

	printf("Enter the size or array...");
	scanf("%d", &size);
	printf("Enter the array elements: ");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	printf("Array elements are: ");
		for (i = 0; i < size; i++) {
			printf("%d", a[i]);
		}
}