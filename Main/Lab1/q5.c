/*
Q: WAP to demonstrate realloc() by changing the array size dynamically.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int* ptr,n1,n2, i;
	printf("Enter number of elements: ");
    scanf("%d",&n1);
	ptr = (int*)calloc(n1, sizeof(int));
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	} else {
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < n1; ++i) {
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for (i = 0; i < n1; ++i) {
			printf("%d ", ptr[i]);
		}
		printf("\n\nEnter the new size of the array: ");
        scanf("%d",&n2);
		ptr = realloc(ptr, n2 * sizeof(int));
		printf("Memory successfully re-allocated using realloc.\n");
		for (i = n1; i < n2; ++i) {
			ptr[i] = i + 1;
		}
		printf("The elements of the array are: ");
		for (i = 0; i < n2; ++i) {
			printf("%d ", ptr[i]);
		}
		free(ptr);
	}
}