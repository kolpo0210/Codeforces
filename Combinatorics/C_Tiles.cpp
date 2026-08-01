#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll MOD=998244353;
int main()
{
	ll w, h;
	cin>>w>>h;
	ll tmp=(w-1)+(h-1);
	if(tmp<1)
	{
		cout<<4;
		return 0;
	}
	ll ans=4;
	for(int i=0; i<tmp; i++)
	{
		ans*=2;
		ans%=MOD;
	}
	cout<<ans;
}
