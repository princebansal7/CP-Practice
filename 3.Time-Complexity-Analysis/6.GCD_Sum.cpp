/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

ll gcdSum(ll x)
{
    ll temp = x;
    ll sum = 0;
    while (temp > 0) {
        sum += (temp % 10);
        temp /= 10;
    }
    return __gcd(x, sum);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x = n;
        while (true) {
            ll gcd = gcdSum(x);
            if (gcd > 1)
                break;
            x++;
        }
        cout << x << nl;
    }
    return 0;
}