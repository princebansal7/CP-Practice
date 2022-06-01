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
    string s1, s2;
    cin >> s1 >> s2;

    rep(i, 0, s1.size())
    {
        if (s1[i] != s2[i]) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    return 0;
}