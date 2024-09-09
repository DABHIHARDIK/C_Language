#include <stdio.h>
#include<stdbool.h> 

int maxProfit(int *prices, int pricesSize)
{
   int ans = 0;
        int min_price = 10000;
        
        for (int i = 0; i < pricesSize; i++) {
            int cur_price = prices[i];
            if (cur_price < min_price) {
                min_price = cur_price;
            }
            else if (cur_price - min_price > ans) {
                ans = cur_price - min_price;
            }
        }
        printf("%d",ans);
        return ans;

}

int main()
{
    int prices[] = {7,3,6,1,3,2};
    maxProfit(prices, 6);
    return 0;
}