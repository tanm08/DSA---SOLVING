#include<iostream>

using namespace std;

int main(){
    //WAP to find the factorial of a number
    //entered by the user

    int n, factorial = 1;
    cout << "Enter the Number: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << "Factorial = " << factorial << endl;
    }else{
        for (int i = n; i > 0; i--)
        {
            factorial *= i;
        }
        cout << "Factorial = " << factorial << endl;
    }

    return 0;

}
