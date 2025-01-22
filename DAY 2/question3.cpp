#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    int radius;

    cout << "Enter the radius: " << endl;
    cin >> radius;

    cout << "Area of the circle: " << PI * radius * radius;
    return 0;
}