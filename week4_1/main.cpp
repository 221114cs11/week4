//
//  main.cpp
//  Control Flow
//
//  Created by Mukhammadamin Akhamdjonov on 04/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x;
    cout<<"Enter the number:";
    cin>>x;
    if(x>0){
        if(x%2==0){
        cout<<"Positive and even\n";
    }else{
        cout<<"Positive and odd\n";
    }
    }else{
        if(x%2==0){
            cout<<"Negative and even\n";
        }else{
            cout<<"Negative and odd\n";
        }
    }
    return 0;
}
