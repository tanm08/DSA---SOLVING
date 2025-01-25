#include<iostream>

using namespace std;

int funct(int a, int b){
    return ((a*a) + (b*b) + (2*a*b));
}

int main(){

// Write a function which takes 2 numbers as parameters (a & b) and 
// outputs : a^2 + b^2 + 2*ab.

    int n, m;
    cout << "Enter the First Number = ";
    cin >> n;
    cout << "Enter the Second Number = ";
    cin >> m;

    int result = funct(n, m);
    cout << "The answer is = " << result;

    return 0;
}