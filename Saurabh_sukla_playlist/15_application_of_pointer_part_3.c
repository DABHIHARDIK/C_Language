#include<stdio.h>

int length( char *p ){
int i = 0 ;
for( ; p[i]!='\0';i++);
return i ;
}

int main()
{
char temp[]= "Hardik";

printf( " %d", length(temp));
    return 0 ;
}