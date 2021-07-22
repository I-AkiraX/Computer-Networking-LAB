/*
Q: Program to display the details of a structure person like age and name using dynamic memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>
struct person {
  int age;
  char name[30];
};

void main() {
    struct person *ptr;
    int noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);
    ptr = (struct person *)malloc(noOfRecords * sizeof(struct person));
    printf("\n\nEnter the details--");
    for (int i = 0; i < noOfRecords; ++i) {
        printf("\nPerson %d\nEnter name and age:\n",i+1);
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }

    printf("\n\nDisplaying Information--\n");
    for (int i = 0; i < noOfRecords; ++i) {
        printf("\nPerson %d\nName: %s\nAge: %d\n", i+1,(ptr + i)->name, (ptr + i)->age);
    }

    free(ptr);
}