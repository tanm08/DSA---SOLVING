#include <iostream>

using namespace std;

//WAF to print all Primes in a Range from 2 to n;

bool isPrime(int n){
    if (n==1)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void allPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter the Number = ";
    cin >>n;
    // 0-->Number is not prime, 1-->Number is prime
    allPrime(n);

    return 0;
}