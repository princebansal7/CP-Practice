/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

int main()
{
    double n;
    cin >> n;
    int val = n;

    if (n - val < 1e-9)
        cout << "int " << val;
    else
        cout << "float " << val << " " << n - val;

    /*-------My Brute force way (Accepted)------------------
       string s;
       cin >> s;
       int idx = 0;
       for (char ch : s) {
           idx++;
           if (ch == '.') {
               break;
           }
       }
       string isZero = s.substr(idx);
       int val = stoi(isZero);
       if (val == 0)
           cout << "int " << stoi(s);
       else
           cout << "float " << stoi(s) << " 0." << val;
   ---------------------------------------------------------*/
    return 0;
}