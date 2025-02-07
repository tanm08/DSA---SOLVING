// Print subarrays -> continuous part of an array 
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
    int maxSum=0;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            // cout << "[" << start << ", " << end << "]";
            cout << "[ ";
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "] ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    int arr[5];
    cout << "Enter the value of n: ";
    cin >> n;
    inputArray(arr, n);
    printArray(arr, n);
    printSubArray(arr, n);
}