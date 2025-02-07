#include <iostream>
using namespace std;

void maxSumSubarray(int *arr, int n){
    int maxSum = INT32_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum<0)
        {
            currSum=0;
        }
    }
    cout << "Max sum is: " << currSum;
}

int main(){
    int n;
    int arr[6]={2,-3,6,-5,4,2};
    cout << "Enter the value of n: ";
    cin >> n;
    // inputArray(arr, n);
    // printArray(arr, n);
    maxSumSubarray(arr, n);

    return 0;
}