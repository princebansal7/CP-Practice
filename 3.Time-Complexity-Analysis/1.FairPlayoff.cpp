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
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int m1 = max(a, b);
        int m2 = max(c, d);

        if (m1 > min(c, d) and m2 > min(a, b))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}