#include <iostream>

using namespace std;

int main(){
    //WAP to input a number and check whether the 
    //number is an armstrong number or not
    int num, digit, sum = 0;
    cout << "Enter the number : ";
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