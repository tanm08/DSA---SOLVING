#include<iostream>
using namespace std;

int main(){
    float pencil, pen, eraser;
    cout << "Enter the amount of pencil: ";
    cin >> pencil;
    cout << "Enter the amount of pen: ";
    cin >> pen;
    cout << "Enter the amount of eraser: ";
    cin >> eraser;

    float total = pencil + pen + eraser;

    float result = total * 0.18 ;// 18 % gst on the total price 
    // the total price user have to give to the vendor is 
    float totalPrice = result + total;

    cout << "Bill without any tax: " << total << endl;
    cout << "GST: " << result << endl;
    cout << "Bill of the user with GST: " << totalPrice ;
    return 0;
}