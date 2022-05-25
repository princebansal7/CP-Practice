/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int n, s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int sum = s - i - j;
            if (sum >= 0 && sum <= n)
                cnt++;
        }
    }
    cout << cnt;

    /* WAY-2
        int k, s;
        cin >> k >> s;

        int count = 0;
        for (int x = 0; x <= k; x++) {
            for (int y = 0; y <= k; y++) {
                int z = s - (x + y);
                if (z < 0 || z > k)
                    continue;

                count++;
            }
        }

        cout << count << endl;
    */

    /* O(1) Solution

        int k, s;
        cin >> k >> s;

        if (k > s) {
            cout << (s + 1) * (s + 2) / 2 << endl;
            return 0;
        }

        if (3 * k < s) {
            cout << 0 << endl;
            return 0;
        }

        if (2 * k <= s) {
            int r = 3 * k - s + 1;
            cout << r * (r + 1) / 2;
            return 0;
        }

        int n = k - 1, m = s - k;
        cout << (k + 1) * (k + 2) / 2 + (n - m + 1) * m << endl;
    */
    return 0;
}