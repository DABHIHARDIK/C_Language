<<<<<<< HEAD
#include<stdio.h> 

 int main(){


    int  i =0 ; 
    // for ( ; i < 1000 ; i++){
    //     printf( " %d", i);
    // }
    printf( " %lu " ,sizeof(i));
    return 0 ; 
 }
=======
 #include<stdio.h> 
 #include<stdlib.h>
#include<string.h> 
 int main(){
char *ptr = (char *)malloc(sizeof(char)* 5);
ptr[0] = 'a';
ptr[1] = 'b';
ptr[2] = ' ';
ptr[3] = 'c';
ptr[4] = '\0';

strrev(ptr);
printf("%s",ptr);

    return 0 ; 

 }


>>>>>>> refs/remotes/origin/main
