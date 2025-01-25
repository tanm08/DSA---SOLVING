#include<iostream>

using namespace std;

int largestOfThreeNumber(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if (b>c)
        {
            return b;
        }else{
            return c;
        }
    }
}

int main(){
// Question 4 : Write a function that prints the largest of 3 numbers.
    int a, b, c;
    cout << "Enter the First Number = ";
    cin >> a;
    cout << "Enter the Second Number = ";
    cin >> b;
    cout << "Enter the Third Number = ";
    cin >> c;

    cout << "Largest of the Three Numbers = " << largestOfThreeNumber(a, b, c);
    return 0;

}