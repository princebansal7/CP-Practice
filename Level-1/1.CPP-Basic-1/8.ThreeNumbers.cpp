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
    return 0;
}