#include<stdio.h> 
#include<stdlib.h> 

int cmp( const void *a , const void *b){
    return *(int *)a - *(int *)b;
}
int heightChecker(int* heights, int heightsSize) {
    int count = 0 ;
    int * ptr = (int *)malloc(sizeof(int) * heightsSize);
    for( int i = 0 ; i < heightsSize ; i++){
        ptr[i] = heights[i];
    }
    qsort(ptr , heightsSize , sizeof(int), cmp);
    for(int i = 0 ; i < heightsSize ; i++){
        if (ptr[i] == heights[i])
            count++;
    }
    printf("%d",count);
    return count;

}
int main(){
    int heights[] = {1,1,4,2,1,3};
    
    heightChecker(heights , 6);
    return 0;
}