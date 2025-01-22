#include<iostream>
using namespace std;

int main(){
    //Reverse a given number and print the result
    int n = 10829, lastDigit, result = 0;

    while(n>0)
    {
        lastDigit = n%10;
        result = result * 10 + lastDigit;
        n /= 10;
    }
    cout << "Reverse of given number = " << result << endl;
    return 0;
}