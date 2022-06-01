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
    string s;
    cin >> s;
    bool flag = 1;
    rep(i, 0, s.size())
    {
        if (s.substr(i, 7) == "1111111" or s.substr(i, 7) == "0000000") {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}