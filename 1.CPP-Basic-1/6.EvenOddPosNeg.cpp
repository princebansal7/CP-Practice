/*
    @author: princebansal_

*/

#include <iostream>
#include <vector>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int e, o, p, neg;
    e = o = p = neg = 0;
    for (int val : num) {
        if (val > 0)
            p++;
        else if (val < 0)
            neg++;
        if (val & 1)
            o++;
        else
            e++;
    }
    cout << "Even: " << e << nl
         << "Odd: " << o << nl
         << "Positive: " << p << nl
         << "Negative: " << neg << nl;

    return 0;
}