/*
0-> #if , #else , #elif , #endif , #ifdef , #ifndef , ##

0> #if , #else #elif , #endif

As a fiel is being compiled , you can use these commands to cause certain lines of code to be include or not include ( for compilation )

*/

// Example of #if , ...

#include <stdio.h>
#include<string.h> 
#define COUNTRY Indiaa

#ifndef India // if macro is not define then do this 
    #define India " I love my india "
#endif 

#ifdef India // if macro is define using #define then thsi will run
    #define name " jaydev dabhi"
#endif

#if COUNTRY == Indiaa
    #define HD "hardik" 

#endif 

#define ACTION(a,b) a##b+a*b // example of ## concatenates 


int main()
{

char temp[]=HD;
printf( " dabhi %s\n ", temp);
printf( " %s\n",India);
printf( "%s\n",name );
printf( " ## output is %d",ACTION( 3,4 ));


    return 0;
}

/* 
#ifdef macro 
    if the macro has been defined by a #define statement , 
    then the code immediately following the command will be compiled 

#ifndef 
    if the macro has not been defined by a #define statement ,
    then the code immediately following the command will be compiled 

0> ## 
the ## operator is used with the #define macro 
using ## concatenates what's before the ## with what's after it 



*/