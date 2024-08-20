#include <stdio.h>
#include <stdlib.h>

int *numberOfLines(int *widths, int widthsSize, char *s, int *returnSize)
{
    *returnSize = 2;
    int sum = 0;
    int sumcount = 1;
    int *ptr = (int *)malloc(*returnSize * sizeof(int));
    for (int i = 0; s[i] != '\0'; i++)
    {
        char j = 'a';
        int charcout = 0;
        for (; j <= 'z'; j++)
        {
            if (s[i] == j)
                break;
            charcout++;
        }
        if ((sum + widths[charcout]) > 100)
        {
            sum = 0;
            sumcount++;
        }
        sum = sum + widths[charcout];
    }
    ptr[0] = sumcount;
    ptr[1] = sum;

    return ptr;
}

int main()
{

    int widths[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    int returnsize = 2;
    numberOfLines(widths, 26, s, &returnsize);
    return 0;
}