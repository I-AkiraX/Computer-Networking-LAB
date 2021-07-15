/*
Q: WAP to add 500 to a number inside a function and demonstrate how it affects using call by reference.
*/

#include <stdio.h>
void add(int * num1){
    *num1 += 500;
    printf("In function after adding: %d\n\n", *num1);
}
void main(){
    int n1;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("\nIn main before adding: %d\n\n", n1);
    add(&n1);
    printf("In main after adding: %d", n1);
}