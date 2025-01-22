//Question for making calculator for 4 basic arithmetic operations 

#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    char operators;
    cout << "Enter the following operator (+, -, *, /) to perform the operations: ";
    cin >> operators;

    switch(operators){
        case '+':
            c = a+b;
            cout << "sum is: " << c;
            break;
        case '-':
            c = a-b;
            cout << "substraction is: " << c;
            break;
        case '*':
            c = a*b;
            cout << "Multiplication is: " << c;
            break;
        case '/':
            c = a/b;
            cout << "Division is: " << c;
            break;
        default:
            cout << "Enter the valid input";
    }
    return 0;
}