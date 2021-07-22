/*
Q: Program to access the structure member using structure pointer and arrow operator by creating a
    structure employee with details like name, id, age, gender and city.
*/

#include<stdio.h>
#include<string.h>
struct emp{
    char name[30], gender[20], city[40];
    int age, id;
};
struct emp e, *ptr;

void main(){
    ptr=&e;
    strcpy(ptr->name,"Pooja Agarwal");
    strcpy(ptr->gender,"Female");
    strcpy(ptr->city,"Bhubaneswar");
    ptr->age = 19;
    ptr->id = 1905330;

    printf("\n\nDetails of the employee are--\nName: %s\nID: %d\nAge: %d\nCity: %s\nGender: %s",ptr->name,ptr->id,ptr->age,ptr->city,ptr->gender);
}