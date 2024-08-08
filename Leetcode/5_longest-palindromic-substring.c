#include <stdio.h>
#include <string.h>
char reval[2] ;
char *longestPalindrome(char *s)
{   if (strlen(s)==1){
    return s;
}   
    
    reval[0]=s[0];
    // printf(" reval is %c\n",reval[0]);
    char revstr[1000];
    char forwardstr[1000];
    int count = 0 ; 
    printf("string is %s \n", s);
    for (int j = 0; j < strlen(s); j++)
    {
        for (int i = j + 1; i < strlen(s); i++)
        {
            if (s[j] == s[i])
            {
                count = 0 ; 
                for (int k = j; k <= i; k++)
                {   
                    printf(" i is %d\n",i-j);
                   forwardstr[count] = s[k];
                   revstr[(i-j)-count]=s[k];
                   count++; 
                }
                // strcpy(revstr,forwardstr);
                // strrev(revstr);
                printf("forward str is %s\n",forwardstr);
                printf("revstr is %s\n",revstr);
                if (strcmp(revstr,forwardstr)==0){
                    strcpy(s , forwardstr);
                    return s;
                }
                
            }
        }
    }
    return reval;
}

int main()
{
    char input[] = "abacd";
    printf(" final output is %s", longestPalindrome(input));
    return 0;
}