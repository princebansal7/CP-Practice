/*
    @author: princebansal_
*/

#include <iostream>
#include <math.h>
#include <set>
#include <vector>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];

        set<double> st;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double area = (v[j] - v[i]) / 2.0;
                if (area > 0)
                    st.insert(area);
            }
        }
        cout << st.size() << nl;
    }
    return 0;
}