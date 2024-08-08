// #include <stdio.h>

// int main()
// {

//     int x = 5, *p, **q;
//     p = &x;
//     q = &p;
//     printf(" %d\n", **q);

//     **q = 10;
//     printf(" %d\n ", **q);

//     return 0;
// }

#include<stdio.h>

int main(){

int a =650002323 , b ; 
int *p , *q ; 
p = &a; 
q = &b; 
// &a + &b ; // not allowed
// p + q ; // not allowed 
// &a / 5 ; not allowed  
// p / 5 ; not allowed  you can't + / * (subtraction is possible)with another address you can do with variable only. 

// so what can we do 

p+1 ; // basically int consume 2 bytes of memory and pointer store base address of int so as an example consider base addrees is 1000 and you add 1 so output is 1001 so it is assessable for compailer 


printf( " %u\n", p);
printf( " %u\n", q);
printf( " %d\n", p-q);
printf( " %d\n", q-p);

    return 0 ;
}