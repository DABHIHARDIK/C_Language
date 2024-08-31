#include<stdio.h> 
#include<stdlib.h> 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = 2 ; 
    int *ptr = (int *)calloc( *returnSize , sizeof(int));
    if( ptr == NULL){
        printf( " memory not allocated ");
        exit(1);
    }
    for( int i = 0 ; i < nums1Size ; i++){
        for( int j = 0 ; j < nums2Size ; j++){
            // printf( " value of i si %d and j is %d\n", i , j );
            if ( nums1[i] == nums2[j]){
                 ptr[0]++;
                 break;
                 }
                
        }
    }
     for( int i = 0 ; i < nums2Size ; i++){
        for( int j = 0 ; j < nums1Size ; j++){
            // printf( " value of i si %d and j is %d\n", i , j );
            if ( nums2[i] == nums1[j]){
                 ptr[1]++;
                 break;
            }
        }
    }
    printf(" value of count is %d",ptr[0]);
    printf(" value of count is %d",ptr[1]);
}
int main(){
int nums1[] = { 2,3,2};
int nums2[] = { 1, 2};
int size = 3 ; 
findIntersectionValues( nums1 , 3 , nums2 , 2 , &size);    
    return 0 ;
}