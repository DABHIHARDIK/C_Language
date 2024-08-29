char** cellsInRange(char* s, int* returnSize) {
    char i = s[0]; 
    int count = 1;
    for (; s[3] != i; i++)
        count++;
    
    *returnSize = count *  (1 + (int)(s[4]  - s[1]));
    printf("size value is %d", *returnSize);

    char **ptr = (char **)malloc(sizeof(char *) * (*returnSize));
    for (int k = 0; k < *returnSize; k++) {
        ptr[k] = (char *)malloc(sizeof(char) * 3);  // Allocate 3 bytes for each string
    }

    i = s[0];
    count = 0;
    
    for (; i <= s[3]; i++) {
        for (char j = s[1]; j <= s[4]; j++) {
            ptr[count][0] = i;
            ptr[count][1] = j;
            ptr[count][2] = '\0';  // Add null terminator to make it a valid string
            count++;
        }
    }
    return ptr;
}
