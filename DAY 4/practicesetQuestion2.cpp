//Question for making calculator for 4 basic arithmetic operations 

#include <iostream>
using namespace std;

int main(){
    int num, digit, sum = 0;
    cout << "Enter the number to calculate whether it's Armstrong Number or not: ";
    cin >> num;

    int numDuplicate = num;
    while(num > 0){
        digit = num%10;
        sum = sum + (digit*digit*digit);
        num = num / 10;
    }
    if(numDuplicate = sum){
        cout << sum << " is a armstrong number.\n";
    } else {
        cout << sum << " is not a armstrong number.\n";
    }
    return 0;
}