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
    ll n;
    cin >> n;

    // no matter how much we raise 5's power, last 2 digits always remains 25
    // 5^1 = 5
    // 5^2 = 25
    // 5^3 = 125
    // 5^4 = 625
    // 5^5 = 3125
    // 5^6 = 15625 .....

    cout << 25 << nl; // always

    return 0;
}