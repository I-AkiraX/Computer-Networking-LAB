/*
Q: WAP to display the memory arrangement on your computer( the memory address and content of the value).
*/

#include<stdio.h>
void main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    printf("Data\t\t\t Address\n");
    for(int i=0;i<size;i++){
        printf("%d\t\t\t %d\n",arr[i],(arr+i));
    }
}