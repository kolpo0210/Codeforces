/*
name:H. Benches(630H)
Place 5 benches on an n x n grid of path intersections such that no row (east-west path) or column (north-south path) contains more than one bench.
Select 5 distinct rows out of n in C(n, 5) ways.
Select 5 distinct columns out of n in C(n, 5) ways.
Assign each selected row to a unique selected column in 5! (120) ways.
Total ways = C(n, 5) * C(n, 5) * 5!, which simplifies to (n * (n - 1) * (n - 2) * (n - 3) * (n - 4) / 120) * P(n, 5).*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll ncr(ll n, ll r) {
    if (r<0||r>n) return 0;
    if (r==0||r==n) return 1;
    if (r>n-r) {
        r=n-r;
    }
    ll ans = 1;
    for (ll i=1;i<=r;i++) {
        ans*=(n-r+i);
        ans/=i;
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    ll ans=ncr(n, 5)*ncr(n, 5)*120;
    cout<<ans;
}