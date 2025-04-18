//https://codeforces.com/problemset/problem/1497/A
//https://codeforces.com/problemset/submission/1497/316092158
//https://codeforces.com/profile/Sams_Arafin_Kolpo
//"These are my personal solutions to Codeforces problems, uploaded for learning and archival purposes."

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector <int> a;
    set<int>b;
    int tmp;
    int x, y;
    while(n--)
    {
        cin >> tmp;
        a.push_back(tmp);
        x=b.size();
        b.insert(tmp);
        y=b.size();

        if(x!=y)
        {
            a.pop_back();
        }
    }

    sort(a.begin(), a.end());

    for(auto i:b)
    {
        cout << i << " ";
    }
    for(auto i:a)
    {
        cout << i << " ";
    }
    cout << endl;
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
