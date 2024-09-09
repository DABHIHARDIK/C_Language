#include<stdio.h> 

// int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     int sum_num1 = 0 , sum_num2 = 0 ; 
//     for(int i = 0 ; i < nums1Size ; i++){
//         sum_num1 += nums1[i];
//         sum_num2 += nums2[i];
//     }
//     if((sum_num1 - sum_num2) == 0 )
//         return 0 ; 
//     else if((sum_num1 - sum_num2) > 0 )
//         {
//             return ((sum_num1 - sum_num2) / nums1Size * (-1));
//         }
//     else{
//         return ((sum_num1 - sum_num1) / nums1Size);
//     }
// }

int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {

    int max1 = 0, max2 = 0 ; 
    for(unsigned char i = 0 ; i < nums1Size ; i++){
        if ( nums1[i] > max1)
            max1 = nums1[i];
        if( nums2[i] > max2)
            max2 = nums2[i];
    }
    return max2 - max1;
}

int main(){
    int nums1[] = {2,6,4}, nums2[] = {9,7,5};
    addedInteger(nums1 , 3 , nums2 , 3);
    return 0; 
}