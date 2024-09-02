#include<stdio.h> 
#include<string.h> 
#include<stdbool.h> 

bool isAcronym(char ** words, int wordsSize, char * s){
    if ( strlen(s) != wordsSize) return false;
    for(short i = 0 ; i < wordsSize; i++){
        if(words[i][0] != s[i])
            return false;
    }
    return true;

}

int main(){
    char *words[] = {"alice","bob","charlie"};
     char s[] = "abc";
     isAcronym(words , 3 , s );
}