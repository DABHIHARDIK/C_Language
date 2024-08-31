#include<stdio.h> 


int pivotInteger(int n) {
    if ( n == 1)
        return 1;
  int lastdigsum = n ;
  int firstdigsum = 1 ; 
  int i = 2;
  for (  ; i <= n ; i++){
        if( firstdigsum < lastdigsum){
            firstdigsum += i; 
            continue;
        }
        else{
            n--;
            lastdigsum += n ; 
            firstdigsum += i ;  
        }
  }
  printf( " %d",i);
            if ( firstdigsum == lastdigsum )
                return i -1; 
            else
                return -1;

}

int main(){
    int input = 8 ; 
    pivotInteger(8);
    return 0 ;
}