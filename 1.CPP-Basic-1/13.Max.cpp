/*
    @author: princebansal_

*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // cout << *max_element(v.begin(), v.end()) << nl;

    // int max = -1;
    // for (int val : v) {
    //     if (val > max)
    //         max = val;
    // }
    // cout << max << nl;

    int maxi = -1;
    for (int val : v)
        maxi = max(val, maxi);
    cout << maxi << nl;

    return 0;
}