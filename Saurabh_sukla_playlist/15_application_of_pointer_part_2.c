#include<stdio.h>

void BubbleSort( int *array , int SizeofArray)//Bubble sort method for sorting 
{
int temp = 0 ;
for( int i = 1 ; i < SizeofArray;i++){
 
    for ( int j = 0 ; j < SizeofArray-i; j++)
    {
        if ( *(array+j) > *( array+j+1)){
            temp = *(array+j+1);
            *(array+j+1)= *(array+j);
            *(array+j)= temp;
        }
    }
}
    for( int k =0 ; k < SizeofArray; k++){
        printf( " %d", array[k]);
    }

}

int main(){

int array[]= {12 , 15 , 5 , 4, 13 ,16 };
BubbleSort( array,6);
// printf( " %u", &array);
// printf( " %u", &array[1]); // 64 bit architecture that why int consume 4 bytes memory
// printf( " %u", &array[2]);
// output is 6291092 6291096 6291100
    return 0;
}

