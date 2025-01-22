#include <iostream>

using namespace std;

int main(){
    //Floyd's Triangle
    // Number of lines you want to print
    int n;
    cout << "Enter the number = ";
    cin >> n;
    int value = 1;
    // Outer Loop
    for(int i=1; i<=n; i++)
    {
        // Inner Loop
        for(int j=1; j<=i; j++)
        {
            // Work
            cout << value++ << " ";
        }

        cout << endl;

    }

    return 0;
}