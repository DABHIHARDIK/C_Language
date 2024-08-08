//Write a program in Cto check whether a number givenby the user is odd or even
#include<stdio.h>
int main(){
    int a;
printf("Enter the value : ");
scanf("%d",&a);

if (a%2==0)
    printf("NUmber is Even = %d",a);
else 
    printf("Number is odd = %d",a);    
    return(0);
}

