/*
Q: WAP to add elements of an array by dynamic memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int count,n, *arr[100];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
		arr[i] = (int *)malloc(n * sizeof(int));
    printf("Memory successfully allocated using malloc.\n");
	count = 0;
	for (int j = 0; j < n; j++){
		arr[j][j] = ++count;
		printf("%d ", arr[j][j]);
	}
}