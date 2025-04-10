//https://codeforces.com/contest/579/submission/314898491
//https://codeforces.com/profile/Sams_Arafin_Kolpo

#include <bits/stdc++.h>
using namespace std;
void countSetBits(int n)
{
    int ct=0;
    while(n != 0)
    {
        if((n&1) == 1)
        {
            ct++;
        }
        n = n>>1;
    }
    cout << ct << endl;
}
int main()
{
    int n;
    cin >> n;
    countSetBits(n);
}
