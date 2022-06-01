/*
    @author: princebansal_
*/

#include <iostream>
#include <math.h>
using namespace std;
#define nl '\n'
#define ll long long

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << (ll)(ceil(a / c) * ceil(b / c)) << nl; // way-1

    // cout << ((a + c - 1) / c) * ((b + c - 1) / c) << nl; // way-2 (when all are ll)
    return 0;
}