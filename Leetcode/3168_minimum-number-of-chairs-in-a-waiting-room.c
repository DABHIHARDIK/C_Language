#include<stdio.h> 

int minimumChairs(char* s) {
    int count = 0 ; 
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i] == 'E')
            count++;
        else
            count--;
    }
    return count;
}

int main(){
    char s[] = "EEEEEEE";
    minimumChairs(s);
    return 0 ;
}