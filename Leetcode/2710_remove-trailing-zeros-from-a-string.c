#include<stdio.h> 
#include<string.h> 


char * removeTrailingZeros(char * num){
    int len = strlen(num);
    for(int i = len - 1 ; i >= 0 ; i--){
        if(num[i] == '0')
            num[i] = '\0';
        else
            break;
        
    }
    return num;
}

int main(){
    char num[] = "51230100";
    return 0 ; 
}