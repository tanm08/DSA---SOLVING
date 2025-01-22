#include<iostream>
using namespace std;

int main(){
    //Check If number is prime or not

    int n;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2; i<=n-1; i++)
    {
        if(n % i==0){ // i is a factor of n, i completely divides n, n is non prime number
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "Number is Prime" << endl;
    }else{
        cout << "Number is Non-Prime" << endl;
    }
    return 0;
}