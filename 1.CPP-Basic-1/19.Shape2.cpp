/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long

int main()
{
    int n, k = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << ' ';
        }
        while (k != (2 * i - 1)) {
            cout << '*';
            k++;
        }
        k = 0;
        cout << nl;
    }

    return 0;
}