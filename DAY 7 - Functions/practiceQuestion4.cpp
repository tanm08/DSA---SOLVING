#include <iostream>

using namespace std;

//WAF to print if a number is prime or not;

bool isPrime(int n){
    if (n==1)
    {
        return false;
    }
    for (int i = 2; i <= n-1; i++)
    {
        if(n%i == 0){
        return false;
        }
    }
    return true;
}

bool isPrime2(int n){
    if (n==1)
    {
        return false;
    }
    for (int i = 2; i*i <= n-1; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int n;
    cout << "Enter the Number = ";
    cin >>n;
    // 0-->Number is not prime, 1-->Number is prime
    cout << isPrime(n);
    cout << endl;
    cout << isPrime(n);

    return 0;
}