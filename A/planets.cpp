//https://codeforces.com/problemset/problem/1730/A
//https://codeforces.com/contest/1730/submission/315971771
//https://codeforces.com/profile/Sams_Arafin_Kolpo
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, c;
    map <int, int> a;
    cin >> n >> c;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
    int ans=0;
    for(auto [i, j]:a)
    {
        if(j>1)
        {
            ans+=min(j,c);
        }
        else
        {
            ans++;
        }
    }
    cout << ans << endl;

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
