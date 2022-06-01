/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sz = s.size();
        if (sz <= 10) {
            cout << s << nl;
        } else {
            cout << s[0] << sz - 2 << s[sz - 1] << nl;
        }
    }
    return 0;
}