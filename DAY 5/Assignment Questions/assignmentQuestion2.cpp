#include<iostream>

using namespace std;

int main(){
    //WAP to print multiplication table of a
    //number entered by user

    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "Multiplication table of " << n << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;

}
