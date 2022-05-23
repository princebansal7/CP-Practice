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
    for (int i = 1; i <= 12; i++) {
        cout << n << " * " << i << " = " << n * i << nl;
    }
    return 0;
}