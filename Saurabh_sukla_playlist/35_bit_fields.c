/*
0> Conclusion 
    - the value of d is always from 1 to 31 
    - value of m is from 1 to 12 

- We can optimize the space using bit fields 

*/

#include<stdio.h>

struct date{
    unsigned int d:5;//bit field d:5 means 5 bit for d variable only required  
    unsigned int m:4; 
    unsigned int y ; 
};

int main(){
  
struct date d1 = { 22,1,2011};
printf( " size of d1 is %d\n",sizeof(d1));
printf(" date is %d month is %d year is %d", d1.d , d1.m , d1.y);
    return 0; 
}