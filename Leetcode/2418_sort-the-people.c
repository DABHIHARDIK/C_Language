/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int compareDescending(const void* a, const void* b) {
    int int_a = *(int*)a;
    int int_b = *(int*)b;

    // Return negative if b > a (for descending order)
    if (int_a < int_b) return 1;
    if (int_a > int_b) return -1;
    return 0;
}
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    *returnSize = namesSize ; 
    char **temp = (char **)malloc(sizeof(char *) * namesSize);
    for ( int i = 0 ; i < namesSize ; i++){
        temp[i] = (char * )malloc(sizeof(char)*21);
    }
    int arr[heightsSize];
    for ( int i = 0 ; i < heightsSize ; i++){
        arr[i] = heights[i];
    }
    
    qsort(arr, heightsSize, sizeof(int), compareDescending);

    for (int i = 0 ; i < heightsSize ; i++){
        printf(" %d",arr[i]);
    }
    for ( int i =0 ; i < heightsSize ; i++){
        for( int j = 0 ; j < heightsSize ; j++){
            if ( arr[j] == heights[i]){
                strcpy(temp[j],names[i]);
                continue;
            }
        }
    }
    return temp;
}