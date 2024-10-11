#include<stdio.h> 
#include<stdbool.h> 

int prefixCount(char** words, int wordsSize, char* pref) {
    bool set;
    int count = 0 ;
    for(int i = 0 ; i < wordsSize ; i++){
        set = true;
        for(int j = 0 ; pref[j] != '\0' && words[i][j] != '\0' ; j++){
            if(words[i][j] != pref[j])
                set = false;
        }
        if(set == true)
            count++;
    }
    printf("%d ",count);
    return count;
}

int main(){
    char *words[] = {"pay","attention","practice","attend"};
    char pref[] = "at";
    prefixCount(words , 4, pref);
    return 0 ;
}