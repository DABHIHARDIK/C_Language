/*
0> #define(command) PI(Macro) 3.14(value)

int var = PI(3.14) ;

the #define directive defines an identifier and a character sequence ( a set of characters ) that will be substituted for the identifier each tiem it is encountered in the source file.

0> syntax 
    teh identifier is referred to as a macro name and the replacement process as macro replacement

    #define macro-name  char-sequence


*/

#include<stdio.h>
#define PI 3.14
#define SUM(a,b) a+b
#define PRODUCT(a,b) a*b
// int main(){
//     int r ;
//     float a ; 
//     printf( " enter radius of circle ");
//     scanf( " %d", &r);
//     a = PI*r*r; 
//     printf( " area of circle is %f",a);
//     return 0 ;
// }
int main(){
printf( " sum of a and b %d\n", SUM(3,4));
printf( " product of a and b %d\n", PRODUCT(3+2,4-6));//basicallly 3+2*4-6 compailer 
printf( " product of a and b %d\n", PRODUCT((3+2),(4-6)));

#undef SUM
// printf( " sum of a and b %d\n", SUM(3,4));// it will give error when you run code

    return 0 ;
}