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
    bool flag = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}