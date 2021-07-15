/*
Q: WAP to demonstrate swapping of 2 numbers using call by reference.
*/

#include <stdio.h>
void swap(int * num1, int * num2){
    int temp;
    temp  = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("In function after swapping: %d %d\n\n", *num1, *num2);
}
void main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("In main before swapping: %d %d\n\n", n1, n2);
    swap(&n1, &n2);
    printf("In main after swapping: %d %d", n1, n2);
}