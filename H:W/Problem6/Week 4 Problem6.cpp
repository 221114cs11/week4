/* A student will not be allowed to sit in exam if his/her attendance is less than 75%. Take
 following input from user:
 a)Number of classes held.
 b)Number of classes attended.
 And print:
 1)Percentage of class attended
 2)Is student is allowed to sit in exam or not. */
// 221114
// Mukhammadamin Akhmadjonov


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    float totalClasses, classesAttended, percentage;
    cout << "Enter total classes held : ";
    cin >> totalClasses;
    cout<<"\n";
    cout << "Enter classes attended by student : ";
    cin >> classesAttended;
    cout<<"\n";
    if (classesAttended <= totalClasses)
    {
        percentage = (classesAttended / totalClasses) * 100;
        cout << fixed << setprecision(2) << percentage << "%" << " of class attended" << endl;

        if ((percentage < 75) && (percentage >= 0))
        {
            cout << "Student is not allowed to sit in exam because his/her percentage is below 75";
            cout<<"\n";
        }
        else
        {
            cout << "Student is allowed to sit in exam because his/her percentage is above 75";
            cout<<"\n";
        }
    }
    else
    {
        cout << "Attended classes cannot be more than total classes held!";
    }

    return 0;
}
