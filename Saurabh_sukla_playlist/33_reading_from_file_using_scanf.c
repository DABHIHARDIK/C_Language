#include<stdio.h>
#include<stdlib.h>

/*
scanf( ) --> /n /t or "space" demilitor(terminator)

fscanf( fp , " %d%d",&a,&b);

*/

int main(){

    FILE *fp ; 
    fp = fopen("33_fscanf.txt","r");
    int a ,b,c; 
    fscanf( fp , "%d%d%d",&a,&b,&c);// we can add seperator on %d%d like this %d,%d the in file also we need to separate this type of data 
    printf( " a= %d b =%d c = %d",a,b,c);
    
    
    fclose(fp);
    return 0 ; 
}