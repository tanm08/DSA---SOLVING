#include <iostream>

using namespace std;

//WAF to find the product of 2 numbers - a&b;

int product(int a, int b){
    int mult = a*b;
    return mult;
}

int main(){

    int prod = product(3, 4);
    cout << "Product = " << prod << endl;

    return 0;
}