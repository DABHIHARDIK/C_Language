#include<stdio.h> 

void revstr(char *str){
    int strlen = 0 ; 
    printf(" Input string :- %s\n",str);
    for(; str[strlen]!='\0';strlen++);
    printf("strlen is %d\n",strlen);
    for(int loop = 0 ; loop < strlen/2;loop++){
        str[loop] = str[loop]^str[strlen - loop - 1]; 
        str[strlen - loop - 1] = str[loop]^str[strlen - loop - 1]; 
        str[loop] = str[loop]^str[strlen - loop - 1]; 
    }
    printf("After reverse string is :- %s",str);

}
int main(){
    char str[]= "hardik dabhi";
    revstr(str);
    return 0; 
}