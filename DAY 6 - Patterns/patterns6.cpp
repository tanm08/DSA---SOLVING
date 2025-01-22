#include <iostream>

using namespace std;

int main(){
    //Hollow Rectangle Pattern
    // Number of lines you want to print
    int n;
    cout << "Enter the number = ";
    cin >> n;
    // Outer Loop
    for(int i=1; i<=n; i++)
    {
        // Inner Loop
        cout << "* "; // First
        for(int j=1; j<=n-1; j++)
        {
            // Work
            if(i==1 || i==n){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << "* ";
        cout << endl;

    }

    return 0;
}