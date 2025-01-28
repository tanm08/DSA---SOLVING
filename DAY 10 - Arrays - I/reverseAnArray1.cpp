//Without using the extra space

#include <iostream>

using namespace std;
// without extra space
void reverseAnArray(int *arr1, int n){
    int temp = 0;
    for(int i=0; i<n/2; i++){
        temp = arr1[i];
        arr1[i] = arr1[n-i-1];
        arr1[n-i-1] = temp;
    }
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
    printArray(arr1, n);
    reverseAnArray(arr1, n);
    printArray(arr1, n);
    // printArray(arr2, n);

    return 0;
}