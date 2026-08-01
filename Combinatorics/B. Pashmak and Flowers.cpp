#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(ll i=0; i<n; i++)
	{
		cin>>v[i];
	}
	ll mx=*max_element(v.begin(), v.end());
	ll mn=*min_element(v.begin(), v.end());
	ll cnt1=count(v.begin(), v.end(), mx);
	ll cnt2=count(v.begin(), v.end(), mn);
	cout<<mx-mn<<" ";
	if(mx==mn)
	{
		ll ans=cnt1*(cnt1-1);
		ans/=2;
		cout<<ans;
		return 0;
	}
	cout<<cnt1*cnt2;
}
