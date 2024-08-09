/*
0> what is command line ? 
    - Ways to run your program 
        - Using IDE 
        - By double click 
        - Using command line 

0> Arguments in main()
    - Take something nature of function 
    - Actual and formal arguments 
    - main() may take arguments 
    - who calls main?????

0> Remember 
    - you can pass arguments to the main function only when you are calling your program using command line
*/

#include<stdio.h>

int main(int argc , char * argv[])
{  
   int i ; 
   for ( i = 0 ; i <argc; i++){
    printf("\n%s",argv[i]);
   }
    return 0;
}