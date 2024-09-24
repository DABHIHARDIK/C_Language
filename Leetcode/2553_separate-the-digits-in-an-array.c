/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int count = 0 ;
    int *ptr = (int *)malloc(sizeof(int) * numsSize * 6);
    *returnSize = 0 ;
    for(int i = 0 ; i < numsSize ; i++){
        if (nums[i] < 10){
            *returnSize += 1;
            ptr[count] = nums[i];
            count++;
        }
        else if (nums[i] < 100)   {   
            *returnSize += 2;
                count++;
            while(nums[i] > 0){
            ptr[count] = nums[i] % 10;
            nums[i] /= 10;
            count--;
        }
        count += 3;
        }
        else if ( nums[i] < 1000){
          
                count += 2;
            while(nums[i] > 0){
            ptr[count] = nums[i] % 10;
            nums[i] /= 10;
            count--;
        }
        count += 4;
        *returnSize += 3;
        }
        else if (nums[i] < 10000){
       
                count += 3;
            while(nums[i] > 0){
            ptr[count] = nums[i] % 10;
            nums[i] /= 10;
            count--;
        }
        count += 5;
            *returnSize += 4;
        }
        else if (nums[i] < 100000) {
        
            count += 4;
            while(nums[i] > 0){
            ptr[count] = nums[i] % 10;
            nums[i] /= 10;
            count--;
        }
        count += 6;
        *returnSize += 5;  
        }
         else if (nums[i] == 100000) {
        
            count += 5;
            while(nums[i] > 0){
            ptr[count] = nums[i] % 10;
            nums[i] /= 10;
            count--;
        }
        count += 7;
        *returnSize += 6;  
        }
    }
    printf("%d",*returnSize);
    return ptr;
}