/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || l1 > r2)
        cout << -1 << nl;
    else
        cout << max(l1, l2) << " " << min(r1, r2) << nl;

    return 0;
}
/*

// Wrong Logic
ll l1, r1, l2, r2;
cin >> l1 >> r1 >> l2 >> r2;
if (l2 >= l1 and l2 <= r1) {
    if (r2 >= l1 and r2 <= r1)
        cout << l2 << " " << r2 << nl;
    else if (l2 >= l1 and l2 <= r1) {
        if (r1 >= l2 and r1 <= r2)
            cout << l2 << " " << r1 << nl;
    }
} else if (l1 >= l2 and l1 <= r2) {
    if (r1 >= l2 and r1 <= r2)
        cout << l1 << " " << l2 << nl;
    else if (l1 >= l2 and l1 <= r2) {
        if (r2 >= l1 and r2 <= r1)
            cout << l1 << " " << r2 << nl;
    }
} else
    cout << -1 << nl;

*/