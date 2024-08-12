/*
0> Const keyword 
    - Const ia a keyword in C language 
    - Const ia a qualifier 
    - The qualifier const can be applied to the declaration of any variable to specify that its value will not be changed

0> usage of const 
    - The keywords const can be applies to any declaration , includeing those of structure, unions , enumerated types or typesdef names 
    - Applying to a declaration is called qualifying the declaration 

0> Note :- If when define time we are not assigning the value in const variable like 
    const int x ; 
    printf( " value of x is %d",x); that is garbage value and after declaration we can not assign or change the value of const 

*/
#include<stdio.h>

int main(){
    
    const int x  = 0 ; 
    // const int *p ; // const to pointer
    int *const p=&x ; // pointer to const 
    // p =  &x; // This way to change the value of const variabel 
    printf(" x = %d \n",x);
    ++(*p);
    printf(" x = %d",x);



    const int *p; //we can chage the value pointer but not chage value of pointing variable 
    int *const p ; // we can not change in pointer
    const int *const p ; // we can not change value of pointer and pointing to pointer value 

    return 0;
}