#include<iostream>
using namespace std;

int main(){
    //Print the digits of a given number in reverse using 
    //while loop
    int n = 10829, lastDigit;

    while(n>0)
    {
        lastDigit = n%10;
        cout << lastDigit << " ";
        n /= 10;
    }

    return 0;
}