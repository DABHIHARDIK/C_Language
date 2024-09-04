#include<stdio.h> 

int countAsterisks(char* s) {
    int count = 0 , estrick = 0 ; 
    for(int i = 0 ; s[i]!='\0' ; i++){
        if ( s[i] == '|'){
            estrick++;
            continue;
        }
        if( (estrick & 1) == 0){
            if (s[i] == '*')
                count++;
        }
    }
    return count;
}

int main(){
    char s[] = "l|*e*et|c**o|*de|";
    countAsterisks(s);
    return 0 ;
}