//
//  main.cpp
//  Problem8
//
//  Created by Mukhammadamin Akhamdjonov on 05/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int grade;
    cout<<"Enter the grade (0-100):";
    cin>>grade;
    switch (grade/10)
    {
        case 10:
        case 9:cout<<"A\n";
            break;
        case 8:cout<<"B"<<endl;
            break;
        case 7:cout<<"C"<<endl;
            break;
        case 6:cout<<"D"<<endl;
            break;
        default:cout<<"F"<<endl;
            break;
    }
    return 0;
}

