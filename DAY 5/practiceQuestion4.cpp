#include<iostream>
using namespace std;

int main(){
    //Print the sum of odd digits of a 
    //number using while loop
    int n = 10829, lastDigit, sum=0;

    while(n>0)
    {
        lastDigit = n%10;
        if(lastDigit%2 != 0){
            sum += lastDigit;
        }
        n /= 10;
    }

    cout << sum;

    return 0;
}