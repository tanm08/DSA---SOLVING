#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //Check If number is prime or not
    //using optimized way in this method 
    //you have to run a loop from 2 to squareroot(n)
    int n;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n % i==0){ // i is a factor of n, i completely divides n, n is non prime number
            isPrime = false;
            break;
        }
    }
    if(isPrime){// no need to write isPrime == true, By just writting isPrime it will get it 
        cout << "Number is Prime" << endl;
    }else{
        cout << "Number is Non-Prime" << endl;
    }
    return 0;
}