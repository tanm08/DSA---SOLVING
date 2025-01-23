#include <iostream>

using namespace std;

//WAF to print the factorial of number n;

int factorial(int a){
    if (a==0 || a==1)
    {
        return 1;
    }else{
        return (a*factorial(a-1));
    }
}

int main(){

    int n;
    cout << "Enter the Number = ";
    cin >>n;

    int Fact = factorial(n);

    cout << "Factorial = " << Fact << endl;

    return 0;
}