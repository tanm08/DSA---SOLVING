#include <iostream>

using namespace std;

// To Convert the Decimal Number to Binary Number (code)

void decToBin(int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1; // 10^0, 10^1, 10^2......
    while (n>0)
    {
        int rem = n%2;
        binNum += rem * pow;
        n = n/2;
        pow = pow*10;
    }

    cout << "The binary form of " << decNum << " = "<< binNum << endl;
}

int main(){

    int decNum;
    cout << "Enter the Decimal Number = ";
    cin >> decNum;

    decToBin(decNum);
    return 0;
}