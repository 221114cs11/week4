//
//  main.cpp
//  Problem9
//
//  Created by Mukhammadamin Akhamdjonov on 05/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num>0)
    {
        case 1:
            printf("%d is positive.\n", num);
        break;

        case 0:
            switch (num<0)
            {
                case 1:
                    printf("%d is negative.\n", num);
                    break;
                case 0:
                    printf("%d is zero.\n", num);
                    break;
            }
        break;
    }

    return 0;
}
