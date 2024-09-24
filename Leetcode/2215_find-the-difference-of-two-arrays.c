#include<stdio.h> 



// int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    
// }

int main(){

float student[10];
printf("Enter a 10 student marks\n");
for(int i = 0 ; i < 10 ; i++){
 scanf("%f",&student[i]);   
}

for(int j = 0 ; j < 10 ; j++){
    printf(" studnet%d of %f\n",j,student[j]);
}
return 0 ;
}