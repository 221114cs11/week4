/* Write C++ program that takes your age from user input and tells whether you are eligible to
get a driving license in the Republic of Uzbekistan or not. */
// 221114
// Mukhammadamin Akhmadjonov

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18 && age<=60)
    {
        cout<<"Person is eligible to get a driving license"<<endl;
    }
    else
    {
        cout<<"Person is not eligible to get a driving license"<<endl;
    }
    return 0;
}
