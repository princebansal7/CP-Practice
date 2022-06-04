/*
    @author: princebansal_
*/

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)
const int N = 1005;

int main()
{
    int n, arr1[N], arr2[N];
    cin >> n;
    bool ok = 1;
    rep(i, 0, n) cin >> arr1[i];
    rep(i, 0, n) cin >> arr2[i];

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    map<int, int> mp1, mp2;
    rep(i, 0, n) mp1[arr1[i]]++;
    rep(i, 0, n) mp2[arr2[i]]++;

    rep(i, 0, n)
    {
        if (arr1[i] != arr2[i] or mp1[arr1[i]] != mp2[arr2[i]]) {
            cout << "no" << nl;
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "yes" << nl;
    return 0;
}