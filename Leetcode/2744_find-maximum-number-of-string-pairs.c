#include<stdio.h> 
#include<string.h> 

int maximumNumberOfStringPairs(char ** words, int wordsSize){
    int count = 0 ;
    char rev[3]; 
    for( int i = 0 ; i < wordsSize ; i++){
        for(int j = i+1 ; j < wordsSize ;j++ ){
         if(words[i][0] == words[j][1] && words[i][1] == words[j][0])
            count++;
        }
    }
    printf("%d " ,count);
    return count;
}

int main(){
    char *words[] = {"cd","ac","dc","ca","zz"};
    maximumNumberOfStringPairs(words , 5);
    return 0;
}