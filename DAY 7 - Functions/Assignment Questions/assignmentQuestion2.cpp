#include <iostream>

using namespace std;

int sumOfNumber(int n){
    int sum=0, lastDigit;
    while(n>0){
        lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
    }

    return sum;
}

int main(){

// Write a function to calculate the sum of digits of a number.
    int n;
    cout << "Enter the Number = ";
    cin >> n;

    int sum = sumOfNumber(n);

    cout << "Sum of the number is = " << sum;

    return 0;
}
