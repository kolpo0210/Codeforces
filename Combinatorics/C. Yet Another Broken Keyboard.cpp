#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
	ll n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<char>ch(k);
	for(int i=0; i<k; i++)
	{
		cin>>ch[i];
	}
	ll tmp=0;
	ll ans=0;
	for(int i=0; i<n; i++)
	{
		auto it=find(ch.begin(), ch.end(), s[i]);
		if(it!=ch.end())
		{
			tmp++;
		}
		else
		{

			ll tmp2=(tmp*(tmp+1))/2;
			ans+=tmp2;
			tmp=0;
		}
	}
	ll tmp3=(tmp*(tmp+1))/2;
	ans+=tmp3;
	cout<<ans<<"\n";
}
int main()
{
solve();
}