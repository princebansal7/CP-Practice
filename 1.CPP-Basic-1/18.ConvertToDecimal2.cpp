/*
    @author: princebansal_
*/

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'
#define ll long long
#define repn(i, a, b) for (int i = a; i <= b; ++i)
#define rep(i, a, b) for (int i = a; i < b; ++i)

string decimalToBinary(int n)
{
    string ans;
    while (n > 0) {
        int bit = n % 2;
        ans.push_back(bit + 48);
        n = n >> 1; // dividing  by 2
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int pwr(int n, int power)
{
    int ans;
    for (int i = 1; i <= power; i++) {
        ans = n * power;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string binary = decimalToBinary(n);
        // cout << binary << nl;

        int power = 1, finalNum = 0;
        for (int i = binary.size() - 1; i >= 0; i--) {

            int bit = (binary[i] - 48);

            if (bit == 1) {
                finalNum += power;
                power = pwr(power, 2);
            }
        }
        cout << finalNum << nl;
    }

    return 0;
}