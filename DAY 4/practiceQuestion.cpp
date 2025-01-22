#include <iostream>
using namespace std;

int main(){
    float income, tax;

    cout << "Enter the income of the person: ";
    cin >> income;

    if(income < 500000){
        cout << "0% tax applicadble" << endl;
        tax = 0;
    } else if(income >= 500000 && income <= 1000000){
        cout << "20% tax applicadble" << endl;
        tax = 0.2 * income;
    } else if(income > 1000000){
        cout << "30% tax applicadble" << endl;
        tax = 0.3 * income;
    } else {
        cout << "Enter the valid info";
    }

    cout << "Tax = " << (tax) << endl;
    return 0;
}