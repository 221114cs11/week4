/* Write C++ program that takes three float numbers from user input and finds the maximum
number. */
// 221114
// Mukhammadamin Akhmadjonov

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float n1,n2,n3;

    cout << "Enter three numbers: \n";
    cin >>n1>>n2>>n3;

    if(n1>=n2 && n1>=n3)
        cout<<"Largest number:"<<n1;

    if(n2>=n1 && n2>=n3)
        cout<<"Largest number:"<<n2;
    
    if(n3>=n1 && n3>=n2)
        cout<<"Largest number:"<<n3;
    cout<<"\n";
    return 0;
}
