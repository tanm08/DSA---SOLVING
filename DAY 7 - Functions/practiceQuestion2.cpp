#include <iostream>

using namespace std;

//WAF to print if a number is odd or even;

void oddEvenFunction(int a){
    if (a%2==0)
    {
        cout << a << " is Even" << endl;
    }else{
        cout << a << " is Odd" << endl;
    }

}

int main(){

    int n;
    cout <<"Enter the Number = ";
    cin>>n;
    oddEvenFunction(n);

    return 0;
}