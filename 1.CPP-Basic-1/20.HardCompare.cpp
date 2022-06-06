/*
    @author: princebansal_
*/

#include <iostream>
#include <math.h>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    // Approach:
    //    a^b > c^d
    // => log(a^b) > log(c^d)
    // => b*log(a) > d*log(c)
    // NOTE: log(x) => log(x) with base e
    //       log10(x) => with base 10
    //       log2(x) => with base 2

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    (b * log(a) > d * log(c)) ? cout << "YES" << nl : cout << "NO" << nl;

    return 0;
}