#include <stdio.h>

int main()
{
    int number = 6 ; 
    int *ptr = &number; // use %u instend of %d because pointer value is 0 to positive value only use better to %d
    printf( "%u\n", &number); // adress 62910920 
    printf( "%u\n",ptr);
    printf( "%d\n",*ptr );
    printf( "%d",*&number);


    
    return 0;
}



