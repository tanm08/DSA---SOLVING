#include <iostream>

using namespace std;

int main(){
    //Butterfly Pattern
    int n;
    cout << "Enter the Number = ";
    cin >> n;
    // First Part
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        for(int k=1; k<=n; k++){
            if(i+k<=n){
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    // Second Part
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j>=i){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        for(int k=1; k<=n; k++){
            if(k<i){
                cout << "  ";
            }else{
                cout << "* ";
            }
        }
        cout << endl;
    }


    return 0;
}