#include <iostream>

using namespace std;

int reverseNumber(int n){
    int reverse = 0;
    while (n>0){
        int lastDigit = n%10;
        reverse = (reverse*10) + lastDigit;
        n /= 10;
    }

    return reverse;
}

void isPalindrome(int n){
    if (n == reverseNumber(n))
    {
        cout << "A Number is Palindrome" << endl;
    }
    else{
        cout << "A Number is not Palindrome" << endl;
    }
    
}

int main(){

// Question 1 : Write a function to check if a number is a palindrome in C++. 
// (121 is a palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number. 
// Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321 
// is not a palindrome because the reverse of 321 is 123, which is not equal to 321.

    int n;
    cout << "Enter the Number = ";
    cin >> n;
    cout << reverseNumber(n) << endl;
    isPalindrome(n);

    return 0;
}