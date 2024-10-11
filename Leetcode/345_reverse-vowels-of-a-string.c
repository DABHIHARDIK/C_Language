#include<stdio.h> 
#include<string.h> 

char* reverseVowels(char* s) {
    int start = 0 ; 
    int len = strlen(s);
    len--;
    printf("%d ",len);
    while(start < len){
        // printf("enterd");
        while(s[start] != 'a' && s[start] != 'e' && s[start] != 'i' && s[start] != 'o' && s[start] != 'u' && 
         s[start] != 'A' && s[start] != 'E' && s[start] != 'I' && s[start] != 'O' && s[start] != 'U' && start < len){

            start++;
         }
        while(s[len] != 'a' && s[len] != 'e' && s[len] != 'i' && s[len] != 'o' && s[len] != 'u' && 
         s[len] != 'A' && s[len] != 'E' && s[len] != 'I' && s[len] != 'O' && s[len] != 'U' && start < len ){

         len--;
         }
         if(start < len){
            s[start] = s[start] ^ s[len];
            s[len] = s[start] ^ s[len];
            s[start] = s[start] ^ s[len];
         }


         start++;
         len--;
    }
    return s;
}

int main(){
    char s[] = "IceCreAm";
    reverseVowels(s);
    return 0 ;
}