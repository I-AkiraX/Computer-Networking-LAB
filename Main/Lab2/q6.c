/*
Q: Program to extract bytes from an integer (Hexadecimal) value.
Here we will take an integer value in decimal format and then extract all 4 bytes in 4 different variables.
*/

#include<stdio.h>
typedef unsigned char BYTE;
void main(){
    unsigned int value = 0x44332211;
    BYTE a,b,c,d;
    a=(value&0xFF);
    b=((value>>8)&0xFF);
    c=((value>>16)&0xFF);
    d=((value>>24)&0xFF);
    printf("a= %02X\nb= %02X\nc= %02X\nd= %02X\n",a,b,c,d);
}