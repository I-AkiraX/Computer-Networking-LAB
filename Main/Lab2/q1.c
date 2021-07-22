/*
Q: Program to demonstrate the structure and access their member by creating a structure to hold student details like name, roll, state and age.
*/

#include<stdio.h>
#include<string.h>
struct student{
    char name[30],state[50];
    int roll,age;
}s1;
void main(){
    strcpy(s1.name,"Pooja Agarwal");
    s1.roll=1905330;
    strcpy(s1.state,"Odisha");
    s1.age = 19;

    printf("\n\nDetails of the student--\nName: %s\nRoll No: %d\nState: %s\nAge: %d",s1.name,s1.roll,s1.state,s1.age);
}