/* Write C++ program that will take the numerical value of the month from user input and return
 the number of days in that month. */
// 221114
// Mukhammadamin Akhmadjonov


#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int month;
    printf("Enter month number(1-12): ");
        scanf ("%d", & month);

        switch(month)
        {
            case 1:
                printf("31 days");
                cout<<"\n";
                break;
            case 2:
                printf("28/29 days");
                cout<<"\n";
                break;
            case 3:
                printf("31 days");
                cout<<"\n";
                break;
            case 4:
                printf("30 days");
                cout<<"\n";
                break;
            case 5:
                printf("31 days");
                cout<<"\n";
                break;
            case 6:
                printf("30 days");
                cout<<"\n";
                break;
            case 7:
                printf("31 days");
                cout<<"\n";
                break;
            case 8:
                printf("31 days");
                cout<<"\n";
                break;
            case 9:
                printf("30 days");
                cout<<"\n";
                break;
            case 10:
                printf("31 days");
                cout<<"\n";
                break;
            case 11:
                printf("30 days");
                cout<<"\n";
                break;
            case 12:
                printf("31 days");
                cout<<"\n";
                break;
            default:
                printf("Invalid input! Please enter month number between 1-12");
                cout<<"\n";
        }

        return 0;
    }

