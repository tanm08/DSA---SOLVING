// Print maximum sum of subarrays -> continuous part of an array 
#include<iostream>
using namespace std;

void inputArray(int *arr, int n){
    cout << "Enter the array elements: ";
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
}
void printArray(int *arr, int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printSubArray(int *arr, int n){
    int maxSum=INT32_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            // cout << "[" << start << ", " << end << "]";
            // cout << "[ ";
            int currSum=0;
            for (int i = start; i <= end; i++)
            {
                //cout << arr[i] << " ";
                currSum += arr[i];
            }
            // cout << "] ";
            // cout << currSum << " ";
            // maxSum = max(maxSum, currSum);
            // maxSum = currSum;
            if(maxSum<currSum){
                maxSum = currSum;
            }
        }
        cout << endl;
    }
    cout << "Maximum sum is: " << maxSum;
}

int main(){
    int n;
    int arr[6]={2,-3,6,-5,4,2};
    cout << "Enter the value of n: ";
    cin >> n;
    // inputArray(arr, n);
    printArray(arr, n);
    printSubArray(arr, n);
}