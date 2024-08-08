//write a program in c that print the grade according to the score scored by a student
#include<stdio.h>
int main(){
    int a;
    printf("Enter your Mark :");
    scanf("%d",&a);
    if (a>=90)printf("Your grade is = A+");
    else if (a>=80)printf("Your grade is = A");
    else if (a>=70)printf("Your grade is = B+");
    else if (a>=60)printf("Your grade is = B");
    else if (a>=50)printf("Your grade is = C+");
    else if (a>=40)printf("Your grade is = C");
    else printf(" FAIL ");
    return(0);
}