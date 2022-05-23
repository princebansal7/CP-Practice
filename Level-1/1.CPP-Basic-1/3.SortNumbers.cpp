/*
    @author: princebansal_

*/

#include <iostream>
#include <set>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    multiset<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);

    for (auto val : s)
        cout << val << nl;

    cout << nl;

    cout << a << nl << b << nl << c << nl;
    return 0;
}