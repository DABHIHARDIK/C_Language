#include<stdio.h>
#include<stdlib.h>

uint8_t c = 'a';

char* decodeMessage(char* key, char* message) {
    char *temp = (char * )malloc(sizeof(char)*27);
    temp[0] = '\0';
    int count = 0 , found; 
    for(int i = 0 ; key[i]!='\0' ; i++){
        printf(" %d",i);
        if(key[i]==32)
            {
                count++;
                continue;}
        else{
            found = 0 ; 
            for ( int j = 0 ; temp[j]!='\0';j++){
                if ( temp[j]==key[i]){
                found = 1 ; 
                count++;
                }
            }
            if ( found == 1){
                continue; 
            }
            temp[i-count]= key[i];
            temp[i-count+1] = '\0';
        }
    }
    printf("%s ",temp);
    for( int i = 0 ; message[i]!='\0';i++){
        if ( message[i] == 32){
            continue;
        }
        else{
            for ( int j = 0 ; temp[j]!='\0';j++){
                if( temp[j]==message[i])
                    {message[i] = 97+j;
                    break;
            }

            }
        }
    }
    free(temp);
    return message; 
}

int main(){
    char key[]="the quick brown fox jumps over the lazy dog";
    char message[] = "vkbs bs t suepuv";
    decodeMessage(key,message);
    return 0 ; 
}