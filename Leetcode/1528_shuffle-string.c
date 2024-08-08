#include<stdio.h>
#include<string.h>

char* restoreString(char* s, int* indices, int indicesSize) {
    char str[indicesSize+1];//because of Null character
    strcpy(str,s);
    for( int i = 0 ; i < indicesSize;i++){
        s[indices[i]]=str[i];

    }
printf("%s",s);
return s;
}

int main(){

char str[]="codeleet";
int array[]={4,5,6,7,0,2,1,3};
restoreString(str,array,8);
    return 0 ; 
}