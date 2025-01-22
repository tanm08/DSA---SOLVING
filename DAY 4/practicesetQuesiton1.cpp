#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year to check whether it is leap year or not: ";
    cin >> year;

    if(year % 400 == 0){
        cout << year << " is a leap year.\n";
    }else if(year % 100 == 0){
        cout << year << " is NOT a leap year.\n";
    } else if(year % 4 == 0){
        cout << year << " is a leap year.\n";
    } else {
        cout << "It is not leap year" << endl;
    }
    return 0;
}