/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

const int M = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        // After Solving
        // Tn = 2N-1 (after simplyfying, becoms Odd series)
        // Sn = 1+3+5+..... = n^2, (AP Sum formula)
        int sum = 0;
        sum = ((n % M) * (n % M)) % M;
        cout << sum << nl;
    }
    return 0;
}