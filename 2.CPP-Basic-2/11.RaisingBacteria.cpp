/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int x;
    cin >> x;

    // Wrong

    if (x & 1)
        cout << x / 2 << nl;
    else
        cout << 1 << nl;
    return 0;
}