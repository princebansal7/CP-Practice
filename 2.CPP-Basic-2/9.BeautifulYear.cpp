/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

int main()
{
    int year;
    cin >> year;
    // a little logical question
    while (true) {
        year++;
        int fDigit = year / 1000;
        int SDigit = (year / 100) % 10;
        int TDigit = (year / 10) % 10;
        int LDigit = year % 10;

        if (fDigit != SDigit && fDigit != TDigit && fDigit != LDigit && SDigit != TDigit && SDigit != LDigit && TDigit != LDigit) {
            cout << year << nl;
            break;
        }
    }
    return 0;
}