#include<stdio.h> 
#include<stdbool.h>
int numOfStrings(char** patterns, int patternsSize, char* word) {
    bool set = false;
    int count = 0 ;
    for(int i = 0 ; i < patternsSize ; i++){
      int length = 0 ;
      for(;patterns[i][length] != '\0';length++);
      printf("length is %d\n",length);
      

    }
    return count ;
}

int main(){
    char *patterns[] = {"a","abc","bc","d"}, word[] = "abc";
    numOfStrings(patterns , 4 , word);
    return 0 ;
}