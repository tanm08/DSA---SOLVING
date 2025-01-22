#include<iostream>
using namespace std;

int main(){
    //WAP to show numbers entered by user except multiples
    //of 10.

    int n;

    do
    {
        cout << "Enter the number: " << endl;
        cin >> n;

        if(n % 10 == 0){
            continue;
        }

        cout << "You Entered " << n << endl;

    } while (true);
    
}