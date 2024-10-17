#include<stdio.h> 
#include<stdbool.h> 
#include<string.h> 

int minLength(char * s){
    int len = strlen(s);
    int count = len ; 
    int i = 0 ;  
    while(i < len){
        printf("I value is %d \n",i);
            if(s[i] == 0){
                i++;
                continue;
            }
            if(s[i] == 'A' && s[i+ 1] == 'B'){ //"ABFCACDB"
                printf("1 if \n");
                s[i] = 0 ; 
                s[i+ 1] = 0;
                count -= 2;
                i = 0;
                continue;
            }
            else if(s[i] == 'C' && s[i+ 1] == 'D' )//"ABFCACDB"
                {
                    printf("2 if \n");
                    s[i] = 0;
                    s[i+1 ]= 0 ;
                    count -= 2;
                    i = 0;
                    printf("count is %d\n",count);
                    continue;
                }
            else if(s[i] == 'C'){ //"ABFCACDB"
                printf("3 if \n");
                // break;
                int  j = i + 1;
                for( ; j < len; j++ ){
                    if(s[j] == 0)
                        continue;
                    if(s[j] == 'D'){
                        s[i] = 0 ;
                        s[j] = 0 ;
                        count -= 2;
                        i = -1;
                    printf("count is %d and %d\n ",count,j);
                    }
                    break;
                }
                
            }
               else if(s[i] == 'A'){//"ABFCACDB"
                printf("4 if \n");
                int j = i + 1 ;
                for(; j < len; j++ ){
                    if(s[j] == 0)
                        continue;
                    if(s[j] == 'B'){
                        s[i] = 0 ;
                        s[j] = 0 ;
                        i = -1 ;
                        count -= 2;
                    }
                    break;
                }
            }
            i++;

    }  
    printf("%d",count);
    return count;

}

int main(){
    char s[] = "ABFCACDB";
    minLength(s);
    return 0 ;
}