#include<iostream>
using namespace std;

int main(){
    //WAP whereuser can keep entering numbers till
    //they enter a multiple of 10
    int n;

    do
    {
        cout << "Enter the number: " << endl;
        cin >> n;

        if(n % 10 == 0){
            break;
        }

        cout << "You Entered " << n << endl;

    } while (true);
    
}