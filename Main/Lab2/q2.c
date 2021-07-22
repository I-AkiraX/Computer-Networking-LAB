/*
Q: Program to access the structure member using structure pointer and dot operator by creating a
    structure subject with details name, id, duration and type.
*/

#include<stdio.h>
#include<string.h>
struct sub{
    char name[30], duration[50], type[10];
    int id;
};
struct sub s,*ptr;

void main(){
    ptr = &s;
    strcpy (s.name, "Computer Networks");
    strcpy (s.duration, "6 months");
    strcpy (s.type, "MCQs");
    s.id = 1201;

    printf ("\n\nDetails of the subject are--\nName: %s\nID: %d\nDuration: %s\nType: %s", (*ptr).name, (*ptr).id, (*ptr).duration, (*ptr).type);
}