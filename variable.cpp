#include <stdio.h>

//global defination
#define PI 3.14

//global declaration
int a;

int main(){ //void means no return value)
     printf("Hello World");
     printf("\n 1 %s 2, Hello World");

     // = assignment operator

     // declaration
     int b;

     // defination
     a = 97;
     b = 65;

     // simultaneous assignment
     int i = 10, j = 20, k = 30;

     //multiple assignment
     int x, y, z;
     x = y = z = 333;

     printf("\n%d %d %d %d %d %d %d", i,j,k,x,y,z);

     // initialisation : declaration + defination
     // type variable = value
     int c = 63;
     char d = 'a';
     char e = 'A';
     char f = '?';
}
