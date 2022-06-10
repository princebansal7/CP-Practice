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
    int tt;
    cin >> tt;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int& val : v) {
            cin >> val;
        }
        vector<int> temp = v;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++) {
            if (v[i] != temp[1]) {
                cout << i + 1 << "\n";
            }
        }
    }
    return 0;
}
/*
WAY-2

            int n;
            cin >> n;
            vector<int> v(n);
            unordered_map<int, int> mp;
            rep(i, 0, n)
            {
                cin >> v[i];
                mp[v[i]]++;
            }
            int val, ans;
            for (auto x : mp) {
                if (x.second == 1) {
                    val = x.first;
                    break;
                }
            }
            rep(i, 0, n)
            {
                if (val == v[i]) {
                    ans = i;
                    break;
                }
            }
            cout << ans + 1 << nl;


*/