#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    short wordlen1 = strlen(word1) ;
    short wordlen2 =  strlen(word2);
    int i = 0 ;
    int count = 0 ; 
    char * mergeword = (char *)malloc(sizeof(char) * (wordlen1 + wordlen2 + 1));
    for(i = 0 ; i < (wordlen1 + wordlen2) ; i+=2)
    {
        if(count < wordlen1 && count < wordlen2){
        mergeword[i] = word1[count];
        mergeword[i+1] = word2[count];
        count++;
        }
        else if(count < wordlen1)
        {
            mergeword[i] = word1[count];
            i--;
            count++;
        }
        else{
            mergeword[i] = word2[count];
            i--;
            count++;
        }
    }
    mergeword[i] = '\0';
    printf("%s", mergeword);
    return mergeword;
}

int main(){
    char word1[] = "ac", word2[] = "pqr";
    mergeAlternately(word1,word2);
    return 0;
}