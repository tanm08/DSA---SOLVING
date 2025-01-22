#include <iostream>

using namespace std;

int main(){

    // Number of lines you want to print
    int n;
    cout << "Enter the number = ";
    cin >> n;
    // Outer Loop
    for(int i=1; i<=n; i++)
    {
        // Inner Loop
        for(int j=1; j<=n; j++)
        {
            // Work
            cout << i << " ";
        }

        cout << endl;

    }

    return 0;
}