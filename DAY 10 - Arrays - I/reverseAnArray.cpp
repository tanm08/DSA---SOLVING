#include <iostream>

using namespace std;
// with extra space
void reverseAnArray(int *arr1, int *arr2, int n){
    for(int i=0; i<n; i++){
        arr2[i] = arr1[n-i-1];
        // arr1[i] = arr2[i];
    }
    for(int i=0; i<n; i++){
        // arr2[i] = arr1[n-i-1];
        arr1[i] = arr2[i];
    }
    // cout << endl;
}

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, arr1[] = {5, 4, 3, 9, 2}, arr2[5];
    cout << "Enter the size of an array: ";
    cin >> n;
    reverseAnArray(arr1, arr2, n);
    printArray(arr1, n);
    printArray(arr2, n);

    return 0;
}