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

    double n, k;
    cin >> n >> k;
    ll oddSide = ceil(n / 2);
    if (k <= oddSide) {
        cout << (2 * (ll)k) - 1 << endl;
    } else {
        cout << 2 * ((ll)k - oddSide) << endl;
    }
    return 0;
}
