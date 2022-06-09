/*
    @author: princebansal_
*/

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];

    int max = *max_element(v.begin(), v.end());
    int ans = 0;
    rep(i, 0, n)
    {
        int minAmt = max - v[i];
        ans += minAmt;
    }
    cout << ans << nl;
    return 0;
}