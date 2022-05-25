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

        // sum = r * (r + 1) / 2 - l * (l + 1) / 2 + l; // didn't check l,r comparison

        // ll sum = 0;                   // Will Give TLE due to given range
        // for (int i = l; i <= r; i++)
        //     sum += i;
        // cout << sum << nl;

        // Accepted

        if (l > r)
            swap(l, r);

        ll sumL = l * (l + 1) / 2;
        ll sumR = r * (r + 1) / 2;

        cout << sumR - sumL + l << nl;
    }
    return 0;
}