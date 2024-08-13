#include<stdio.h>

void array(int b[]){
    printf("enter a 5 number\n");
    for(int i = 0 ; i<=4;i++){
        printf("i value is %d\n",i);
        scanf("%d",&b[i]);
    }
}

int main(){
int a[5];
array(a);
// printf("length of array %d\n",sizeof(a)/sizeof(a[0]));
for(int i = 0 ; i<=4;i++){
    printf(" %d",a[i]);
}
    return 0 ; 
}