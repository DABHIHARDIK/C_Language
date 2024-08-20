#include<stdio.h>
#include<stdlib.h>

int lengthOfLongestSubstring(char* s) {
    int count = 0 ; 
    int store = 0 ; 
    int i ,set = 0 ; 
    for( i = 0 ; s[i]!='\0';i++);
    char arr[i] ; 
    for(i = 0 ; s[i]!='\0';i++){
        count= 1 ; 
        printf("i value is %d\n",i );
        set = 0 ; 
        for(int k = 0 ; s[k]!='\0';k++){
            if (arr[k]==s[i])
                set = 1 ; 
        }
        if ( set == 1){
        continue;;
        }
        for ( int h = i+1 ; s[h]!='\0';h++){
            printf("value of h is %d\n",h);
            if ( s[h]==s[i]){
                printf("if loop \n");
            set = 0 ;
            break;
            }
            else{
            printf("else \n");
            set = 1 ;
            }  
        }
        if ( set == 1){
        continue;;
        }
        for(int j = i+1 ; s[j]!='\0'&&s[j]!=s[i];j++){
            printf("enter a for loop \n");
            count++; 
        }
        arr[i]=s[i];
        printf("count value is %d \n ",count);
        if ( count > store){
            store = count;
        }
        
    }
    printf(" value of store is %d",store);
    return count;

}

int main(){
    char s[]="pwwkew";
    lengthOfLongestSubstring(s);
    return 0; 
}