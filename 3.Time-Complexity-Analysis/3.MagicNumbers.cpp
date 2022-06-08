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
    bool ok = true;
    while (n > 0) {
        if (n % 10 == 1) {
            n /= 10;
        } else if (n % 100 == 14) {
            n /= 100;
        } else if (n % 1000 == 144) {
            n /= 1000;
        } else {
            cout << "NO" << nl;
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << nl;
    return 0;
}