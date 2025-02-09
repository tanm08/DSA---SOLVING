#include <iostream>
using namespace std;

void buyAndSellStock(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT32_MAX;
    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Maximum Profit is: " << maxProfit << endl;
}

int main(){
    int n = 6;
    int prices[] = {7, 6, 4, 3, 2, 1};
    buyAndSellStock(prices, n);
    return 0;
}