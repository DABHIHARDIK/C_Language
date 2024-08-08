#include<stdio.h>

int main(){
    int a;
printf("Enter the value :");
scanf("%d",&a);
if (a==0)
    printf("Number is Zero = %d",a);

else if (a<0)
    printf("Number is Negative = %d",a);

else 
    printf("Number is Positive = %d",a);

}