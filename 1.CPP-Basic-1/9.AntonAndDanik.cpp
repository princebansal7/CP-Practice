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
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (char ch : s) {
        if (ch == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}