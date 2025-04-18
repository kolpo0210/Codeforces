//https://codeforces.com/problemset/problem/1899/A
//https://codeforces.com/problemset/submission/1899/316093622
//https://codeforces.com/profile/Sams_Arafin_Kolpo
//"These are my personal solutions to Codeforces problems, uploaded for learning and archival purposes."


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n%3 == 0)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
