/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << nl;
    }
    return 0;
}