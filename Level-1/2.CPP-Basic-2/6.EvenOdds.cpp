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
    long n, k;
    cin >> n >> k;

    long x = n / 2;
    if (k <= x) { // odd side
        cout << 2 * k - 1 << nl;
    } else { // even side
        cout << 2 * (k - x) << nl;
    }
    return 0;
}

// double input, index;
// cin >> input >> index;
// ll odd = ceil(input / 2);
// if (index <= odd) {
//     cout << (2 * (ll)index) - 1 << endl;
// } else
//     cout << 2 * ((ll)index - odd) << endl;
