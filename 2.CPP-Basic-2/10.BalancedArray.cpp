/*
    @author: princebansal_
*/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        if (n == 1) {
            cout << "NO";
            return 0;
        }
        vector<ll> ans;
        int sz = n / 2;
        if (sz & 1)
            cout << "NO" << nl;
        else {
            repn(i, 1, sz)
                ans.push_back(2 * i);

            ll evenSum = accumulate(ans.begin(), ans.end(), 0);

            ll sum2 = ans.back();
            repn(i, 1, sz - 1)
            {
                ll odd = 2 * i - 1;
                ans.push_back(odd);
            }
            ans.push_back(sum2 + (sz - 1));
            cout << "YES" << nl;
            for (int x : ans)
                cout << x << " ";
            cout << nl;
        }
    }
    return 0;
}
