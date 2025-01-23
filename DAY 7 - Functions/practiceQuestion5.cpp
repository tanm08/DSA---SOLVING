#include <iostream>

using namespace std;

//WAF to find the binomial coefficient for given n and r
// nCr = (n!)/r!*(n-r)!;

int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int binomialCoefficient(int n, int r){
    int result = (factorial(n)/((factorial(r)*factorial(n-r))));
    return result;
}



int main(){

    int n, r;
    cout << "Enter n = ";
    cin >>n;
    // cout << endl;
    cout << "Enter r = ";
    cin >>r;

    cout << binomialCoefficient(n, r);

    return 0;
}