/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = false;
    rep(i, 0, s1.size())
    {
        char ch1 = tolower(s1[i]);
        char ch2 = tolower(s2[i]);
        if (ch1 == ch2)
            continue;
        if (ch1 < ch2) {
            cout << -1 << nl;
            flag = true;
            break;
        } else if (ch1 > ch2) {
            cout << 1 << nl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << 0 << nl;

    return 0;
}