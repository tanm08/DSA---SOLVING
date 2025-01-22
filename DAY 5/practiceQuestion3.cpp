#include<iostream>
using namespace std;

int main(){
    //Print the sum of the digits of a number
    //using while loop

    int n=10829, lastDigit, sum=0;

    while(n>0){
        lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    
    cout << sum;
    
    return 0;
}