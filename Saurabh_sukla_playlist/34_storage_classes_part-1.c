#include<stdio.h>
#include<stdlib.h>


/* 
int x = 5 ; 

we know three properties of variable

- Name of variable 
- Size of memory block 
- Type of content 

Other properties of variable 

- Default value 
- storage 
- scope 
- life 

Deceleration statment ( storage classes)
  
  (storage       Keyword     (Defalut   storage
  class)                     value)
- Automatic --> auto -->     garbage    RAM
- Register -->  register --> garbage    Register
- static -->    static -->   0(zero)    RAM
- External -->  etern -->    0(zero)    RAM

*/
int main(){

int x = 5 ; 
printf( "%d\n",x);
{ // without name block 

    int x = 2; 
    printf( "%d\n",x); // we can create a block in c 
}
    printf( "%d\n",x);

    register int y = 10 ; // we can define int or char only  
    // if register are free then iCPU will give space for out variable that it not our hand 
    printf( "%d\n",y);

    return 0 ; 
}