#include <iostream>

using namespace std;

char funct(char ch){
    if(ch=='z'){
        return 'a';
    }else{
        return ch + 1;
    }
}

int main(){
// Question 5 : Write a function that accepts a character (ch) as parameters & returns 
// the character that occurs after ch in the English alphabet. 
// Eg : input = ‘c’, return value = ‘d’ 
// Note : for ch = ‘z’, return ‘a’.
    char ch;
    cout << "Enter the character = ";
    cin >> ch;

    cout << "The Next character is = " << funct(ch);
    return 0;
}