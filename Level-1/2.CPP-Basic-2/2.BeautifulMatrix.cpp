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
    int arr[5][5];
    rep(i, 0, 5)
    {
        rep(j, 0, 5)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;

    // as we need to send 1 at arr[2][2]
    rep(i, 0, 5)
    {
        rep(j, 0, 5)
        {
            if (arr[i][j] == 1) {
                ans = abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
    cout << ans << nl;

    return 0;
}