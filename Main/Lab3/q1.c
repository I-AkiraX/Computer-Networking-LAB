/*
Q: WAP to determine whether the underlying machine is big endian or little endian.
*/

#include<stdio.h>
int main(){
    unsigned int x = 0x76513210;
    char *c = (char *) &x;
    printf ("*c is: 0x%x\n", *c);
    if (*c == 0x10){
        printf ("Underlying architecture is little endian.\n");
    }
    else{
        printf ("Underlying architecture is big endian.\n");
    }
}