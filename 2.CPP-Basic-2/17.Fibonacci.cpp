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

    int n;
    cin >> n;

    ll n1 = 0, n2 = 1, n3;

    if (n == 1) {
        cout << n1 << nl;
    } else if (n == 2) {
        cout << n2 << nl;
    } else {
        repn(i, 3, n)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << nl;
    }
    return 0;
}