#include <iostream>

using namespace std;

int main(){
    //Diamond Pattern

    int n;
    cout << "Enter the Number = ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (i+j<=n)
            {
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        for (int k = 2;  k<=i; k++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    // cout << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (j<i)
            {
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        for (int k = n-1;  k>=i; k--)
        {
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;

}