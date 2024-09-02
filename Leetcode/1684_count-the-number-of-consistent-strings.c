#include<stdio.h> 

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int count = 0 , out = 0  ; 
    for( short i = 0 ; i < wordsSize ; i++){
        for( short j = 0 ; words[i][j]!='\0';j++){
            count = 0 ; 
            for(short k = 0 ; allowed[k]!='\0';k++){
                if(words[i][j] == allowed[k]){
                    count++;
                    break;
                }
            }
            if ( count ==  0 ){
                break;
            }
        }
        if( count > 0 )
            out++;
    }
    printf("%d ",out);
    return out;
}

int main(){
    char allowed[] = "ab";
    char *words[] = {"ad","bd","aaab","baa","badab"};
    countConsistentStrings(allowed , words , 5 );
    return 0 ;
}