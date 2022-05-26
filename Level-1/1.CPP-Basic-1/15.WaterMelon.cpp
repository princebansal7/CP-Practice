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

    if (n > 2 and n % 2 == 0) // n<2 condition is Immportant
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}