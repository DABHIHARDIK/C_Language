#include<stdio.h>
union item {
int x ; 
float y ; 
char z; 
};

int main(){
union item data; 

data.x = 10 ; 
printf( " int value %d \n", data.x);// at a time union store only one variable value in union 
data.y = 10 ; 
printf( " float value %f\n ", data.y);//union is used in (small program)low level programming and structure is used in high level programming 
printf( " int value %f\n ", data.x);


    return 0 ;
}