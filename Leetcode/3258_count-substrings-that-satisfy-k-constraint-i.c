#include<stdio.h> 

int countKConstraintSubstrings(char* s, int k) {
    int one = 0 ;
    int zero = 0 ; 
    int count = 0 ; 
    for(int i = 0 ; s[i] != '\0' ; i++){
        one = 0 ; 
        zero = 0;
        for(int j = i ; s[j] != '\0' ; j++){
            if(s[j] == '0')
                zero++;
            else
                one++;
            if(zero <= k || one <= k ){
                count++;
            }
            else 
                break;
        }
    }
    return count;
}

int main(){
    char s[] = "1010101";
    int  k = 2;
    countKConstraintSubstrings(s ,k);
    return 0 ;
}