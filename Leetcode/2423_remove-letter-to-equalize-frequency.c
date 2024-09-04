//2423_remove-letter-to-equalize-frequency.c

#include<stdio.h> 
#include<stdbool.h> 

bool equalFrequency(char* word) {
    bool set = false ;
    char prev = word[0];

    for( int i = 1 ; word[i] != '\0' ; i++){
        if (prev == word[i])
            set = true;
        else if ( set == true)
            return false;
    }
    return true;
}

int main(){
    char words[] = "abcc";
    equalFrequency(words);
    return 0 ; 
}