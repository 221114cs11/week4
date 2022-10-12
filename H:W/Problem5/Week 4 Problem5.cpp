// Write a C++ program to check whether a character is an alphabet, digit or special character.
// 221114
// Mukhammadamin Akhmadjonov

#include<iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an Alphabet";
        cout<<"\n";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << ch << " is a Digit";
        cout<<"\n";
    }
    else
    {
        cout << ch << " is a Special Character";
        cout<<"\n";
    }
    return 0;
}
