/*
Q: Program to create a structure student with details name, age and subject IDs. Access the structure members using
    i) Structure variable
    ii) Pointer variable
*/

#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int sub_id,age;
}s1, *ptr;
void main(){
    strcpy(s1.name,"Pooja Agarwal");
    s1.sub_id=1905;
    s1.age = 19;
    ptr = &s1;

    printf("\n\nDetails of the student using structure variable--\nName: %s\nAge: %d\nSubject ID: %d",s1.name,s1.age,s1.sub_id);
    printf("\n\nDetails of the student using pointer variable--\nName: %s\nAge: %d\nSubject ID: %d",ptr->name,ptr->age,ptr->sub_id);
}
