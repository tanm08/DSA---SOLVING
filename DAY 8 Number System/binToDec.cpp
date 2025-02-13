#include <iostream>

using namespace std;

// To Convert the binary number to decimal (code)

void binToDec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; // 2^0, 2^1, 2^2
    while (n>0)
    {
        int lastDigit = n%10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n = n/10;
    }

    cout << "The Decimal Number is = " << decNum << endl;
}

int main(){

    int binNum;
    cout << "Enter the Binary Number = ";
    cin >> binNum;

    binToDec(binNum);
    return 0;
}