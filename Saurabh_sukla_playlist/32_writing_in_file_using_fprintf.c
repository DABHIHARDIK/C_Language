#include<stdio.h>
#include<stdlib.h>

/*
fprintf() function is used to write formatted output to the specified stream 

int fprintf ( FILE * stream , const char *format[, arguments , ...])

fprintf(fp , "nsum of %d and %d is %d ", a, b ,c );
*/
int main(){


FILE *fp ; 
fp = fopen("32_fprintf.txt","w");
int a , b; 
printf( " enter a two number ");
scanf( "%d%d",&a,&b);
fprintf(fp , " sum of %d  and  %d is %d",a,b,a+b);
fclose(fp);

    return 0 ;
}