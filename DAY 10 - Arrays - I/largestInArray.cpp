#include <iostream>

using namespace std;

int largestNumberInArray(int arr[5]){
    int max = 0;
    for(int i=0; i<5; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return arr[max];
}

int main(){

    int arr[5] = {5, 14, 3, 9, 2};

    cout << largestNumberInArray(arr) << " Is largest Number in the array";

    return 0;
}