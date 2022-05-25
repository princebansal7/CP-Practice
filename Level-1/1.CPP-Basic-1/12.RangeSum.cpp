/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        ll sum = 0;

        // sum = r * (r + 1) / 2 - l * (l + 1) / 2 + l; // Will Go Out of Range

        // ll sum = 0;                   // Will Give TLE
        // for (int i = l; i <= r; i++)
        //     sum += i;

        cout << sum << nl;
    }
    return 0;
}