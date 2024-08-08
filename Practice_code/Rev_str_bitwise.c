// A program to reverse a string using bitwise operator.
#include<stdio.h>
#include<string.h>
//#include<conio.h>

char *reverse(char *ptr, int start, int end); 
int main()
{
char string[20];
int iIndex=0, eIndex;
char reversed[20];

     printf("Enter the string:\n");
     gets(string);


    eIndex = strlen(string)-1;
   
    printf("The reversed string:\n");
    printf("%s\n", reverse(string, iIndex, eIndex));

 

 return 0;
 }

// Function to reverse the string
char *reverse(char *ptr, int start, int end) {
while(start<end)
 {
    ptr[start] = ptr[start]^ptr[end];
    ptr[end] = ptr[start]^ptr[end];
    ptr[start] = ptr[start]^ptr[end];
 ++start;
 --end;
 }
 return(ptr); }