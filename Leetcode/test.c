#include<stdio.h> 
struct temp {
   float id ;
   char name[29];

};
struct temp obj ; 
int main(){
   printf( " %d ", sizeof(obj));
   // short int i = 2; 
   // printf("%d",i);
   return 0 ; 
}