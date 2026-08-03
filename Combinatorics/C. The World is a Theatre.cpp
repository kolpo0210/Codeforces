/*
name:C. The World is a Theatre(131C)
Select a troupe of exactly t actors from n boys and m girls, requiring at least 4 boys and at least 1 girl.
Iterate over all valid number of boys, b, ranging from 4 up to min(n, t - 1).
For each b, calculate the number of girls needed as g = t - b (ensuring 1 <= g <= m).
Count ways using combinations: C(n, b) * C(m, g) for each valid choice of b.
Sum the results across all valid b values to get the total number of ways.*/

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
	ll n, m ,t;
	cin>>n>>m>>t;
	ll b=4;
	ll g=t-4;
	ll res=0;
	while(g>0)
	{
		if(b<=n && g<=m)
		{
			ll tmp=ncr(n, b)*ncr(m, g);
			res+=tmp;
		}
		b++;
		g--;
	}
	cout<<res;
}