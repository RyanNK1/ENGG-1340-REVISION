#include <iostream>
#include <string>
using namespace std;

int main(){
    struct date
    {
        string day;
        int date;
        int month;
        int year;
    };
    
    date today;
    date * dPtr = 0;
    //if (dPtr != 0)
    cout << dPtr->month;
}