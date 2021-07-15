/*
Q: Menu driven for previous 5 programs.
*/

#include<stdio.h>
#include<stdlib.h>
void add_value(int num1){
    num1+=300;
    printf("In function after adding: %d\n\n", num1);
}
void add(int * num1){
    *num1 += 500;
    printf("In function after adding: %d\n\n", *num1);
}
void swap(int * num1, int * num2){
    int temp;
    temp  = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("In function after swapping: %d %d\n\n", *num1, *num2);
}
void main(){
    int choice,n1,n2,r = 3, c = 4, count,*arr[r],*ptr;
    begin:
    printf("Press to perform--\n1. Addition of 300 to a number inside a function and demonstrate how it affects using call by value.\n2. Addition of 500 to a number inside a function and demonstrate how it affects using call by reference.\n3. Swapping of 2 numbers using call by reference.\n4. Addition of elements of an array by dynamic memory allocation.\n5. Demonstration of realloc() by changing the array size dynamically.\n6. Exit\nYour choice: ");
    scanf("%d",&choice);
    switch (choice){
    case 1:
        printf("Enter a number: ");
        scanf("%d", &n1);
        printf("\nIn main before adding: %d\n\n", n1);
        add_value(n1);
        printf("In main after adding: %d", n1);
        break;
    case 2:
        printf("Enter a number: ");
        scanf("%d", &n1);
        printf("\nIn main before adding: %d\n\n", n1);
        add(&n1);
        printf("In main after adding: %d", n1);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%d%d", &n1, &n2);
        printf("In main before swapping: %d %d\n\n", n1, n2);
        swap(&n1, &n2);
        printf("In main after swapping: %d %d", n1, n2);
        break;
    case 4:
        for (int i=0; i<r; i++)
		    arr[i] = (int *)malloc(c * sizeof(int));
        printf("Memory successfully allocated using malloc.\n");
	    count = 0;
    	for (int i = 0; i < r; i++)
	    for (int j = 0; j < c; j++)
		    arr[i][j] = ++count;
    	for (int i = 0; i < r; i++)
	    for (int j = 0; j < c; j++)
		    printf("%d ", arr[i][j]);
        break;
    case 5:
        printf("Enter number of elements: ");
        scanf("%d",&n1);
    	ptr = (int*)calloc(n1, sizeof(int));
	    if (ptr == NULL) {
		    printf("Memory not allocated.\n");
    		exit(0);
	    }
    	else {
	    	printf("Memory successfully allocated using calloc.\n");
		    for (int i = 0; i < n1; ++i) {
			    ptr[i] = i + 1;
    		}
	    	printf("The elements of the array are: ");
		    for (int i = 0; i < n1; ++i) {
			    printf("%d, ", ptr[i]);
    		}
	    	printf("\n\nEnter the new size of the array: ");
            scanf("%d",&n2);
    		ptr = realloc(ptr, n2 * sizeof(int));
	    	printf("Memory successfully re-allocated using realloc.\n");
		    for (int i = n1; i < n2; ++i) {
			    ptr[i] = i + 1;
    		}
	    	printf("The elements of the array are: ");
		    for (int i = 0; i < n2; ++i) {
			    printf("%d, ", ptr[i]);
    		}
	    	free(ptr);
    	}
        break;
    case 6:
        exit(0);
    default:
        printf("\nWrong choice! Enter again--\n\n");
        goto begin;
        break;
    }
}