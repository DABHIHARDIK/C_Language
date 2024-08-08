#include<stdio.h>

void reverse(char *str){
int i = 0;
char temp ; 
for ( ; str[i]!='\0';i++);
for ( int j = 0 ; j < i/2;j++){
    temp = *(str+j);
    *(str+j)= *( str+5-j);
    str[i-1-j]= temp;
}


}

int main( ){
char temp[]="hardik";//without making variable we cant run this code they give segmentation falut 
reverse(temp);
printf(" %s", temp);

    return 0 ;
}