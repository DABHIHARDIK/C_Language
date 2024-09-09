#include<stdio.h> 
#include<stdbool.h> 

bool checkIfPangram(char* sentence) {
    bool found = 0 ; 
    for(char i = 'a' ; i <= 'z' ; i++){
        found =false;
        for(short j = 0 ; sentence[j] != '\0' ; j++){
            if ( i == sentence[j] )
                found = 1 ; 
        }
        if( found == 0 )    
            return false;
    }
    return true;
} 

int main(){

char sentence[] = "thequickbrownfoxjumpsoverthelazydog";
checkIfPangram(sentence);
    return 0; 
}