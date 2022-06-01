/*
    @author: princebansal_
*/

#include <iostream>
#include <vector>
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
    bool flag = false;
    rep(i, 0, n)
    {
        if (v[i] == 1) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "HARD" << nl;
    else
        cout << "EASY" << nl;

    return 0;
}