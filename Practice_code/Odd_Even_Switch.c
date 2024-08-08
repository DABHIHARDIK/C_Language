#include<stdio.h>
int main(){
    int a;
printf("Enter the value : ");
scanf("%d",&a);
switch(a%2)
{
    case 0:printf("Number is Even = %d",a);
         break;
    case 1:printf("Number is Odd = %d",a);  
         break;
    default:printf("Number is Odd = %d",a);
        break;
    }
}