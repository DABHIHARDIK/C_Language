#include<stdio.h>
int main()
{
 int n,i,x;
 printf(" Please, Enter a Number : ");
 scanf("%d",&n);
 printf("\n ");
 for(i=7;i>=0;i--)
 {
  x=n&(1<<i);
  if(x==0)
  printf("0");
  else
  printf("1");
 }
 return 0;
}