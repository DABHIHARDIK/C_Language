 // Write a program that prints the largest among three number
 #include <stdio.h>
int main() {
   float a,b,c;
     printf("Enter the first value :");
   scanf("%f",&a);
    printf("Enter the second value :");
   scanf("%f",&b);
   printf("Enter the third value :");
    scanf("%f",&c);
   
    if (a>b && a>c)
        printf("Largest number is :- %f",a);
     
    else if (b>a && b>c)
      printf("Largest number is :-%f",b);
     
     else 
       printf("Largest number is :-%f",c);
      return 0;
 }
