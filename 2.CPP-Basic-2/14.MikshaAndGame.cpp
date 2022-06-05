/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    int round;
    cin >> round;
    int m = 0, c = 0;
    while (round--) {
        int miki, chris;
        cin >> miki >> chris;
        if (miki > chris)
            m++;
        else if (chris > miki)
            c++;
    }

    if (m > c)
        cout << "Mishka" << nl;
    else if (c > m)
        cout << "Chris" << nl;
    else
        cout << "Friendship is magic!^^" << nl;

    return 0;
}
