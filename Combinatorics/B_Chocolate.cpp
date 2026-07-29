#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
	ll n;
	cin>>n; 
	vector<ll>v(n);
	ll tmp=0;
	for(ll i=0; i<n; i++)
	{
		cin>>v[i];
	}
	ll ct=count(v.begin(), v.end(), 1);
	if(ct<=1)
	{
		cout<<ct<<"\n";
		return;
	}
	auto it=find(v.begin(), v.end(), 1);
	ll l=distance(v.begin(), it);
	ll ans=1;
	for(ll i=l+1; i<n; i++)
	{
		if(v[i]==1)
		{
			ans*=(i-l);
			//cout<<
			//cout<<l<<" "<<i<<"\n";
			l=i;
		}
	}
	cout<<ans<<"\n";
}
int main()
{
	solve();
}
