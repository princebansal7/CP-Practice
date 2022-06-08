/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int till = min(n, m);
    repn(i, 0, till)
    {
        repn(j, 0, till)
        {
            if ((i * i + j == n) and (i + j * j == m)) {
                // cout << "IN:" << i << " " << j << nl;
                cnt++;
            }
            // cout << "OUT:" << i << " " << j << nl;
        }
    }
    cout << cnt << nl;
    return 0;
}