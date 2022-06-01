#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define nl "\n"
#define ll long long

int main()
{
    fast_io

        int n;
    cin >> n;
    if (n <= 1600)
        cout << "YES" << nl;
    else
        cout << "NO";
    return 0;
}
