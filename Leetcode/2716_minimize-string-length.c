#include<stdio.h> 
#include<stdbool.h> 

int minimizedStringLength(char* s) {
    bool atoz[26];
    int count = 0 ; 
    
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(atoz[s[i] - 'a'] == false ){
            atoz[s[i] - 'a'] = true;
            count++;
        }
    }
    printf("%d ",count);
    return count ;

}

int main(){
    char s[] = "hzphlklansfjoabgquz" ; 
    minimizedStringLength(s);
    return 0 ; 
}