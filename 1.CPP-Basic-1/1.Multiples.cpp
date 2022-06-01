/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % b == 0 or b % a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";

    return 0;
}