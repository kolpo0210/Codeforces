#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
	ll x,y,z,k;
	cin>>x>>y>>z>>k;
	//cout<<x<<" "<<y<<" "<<z<<" "<<k<<"\n";
	ll ans=0;
	ll a=1;
	//cout<<k<<"\n";
	vector<string>v;
	for(a=1; a<=x; a++)
	{
		if(k%a==0 )
		{
			ll rem=k/a;
			for(ll b=1; b<=y;b++)
			{
								if(k % (a * b)) continue;
				ll c = k / (a * b);
				if(c > z) continue;
				// if(rem%b==0 && (rem/b)<=z)
				// {
				// ll c=k/(a*b);
				// 	string s1=to_string(a);
				// 	string s2=to_string(b);
				// 	string s3=to_string(c);
				// 	string str=s1+s2+s3;
				// 	sort(str.begin(), str.end());
				// 	auto it=find(v.begin(), v.end(), str);
				// 	if(it!=v.end())
				// 	{
				// 		continue;
				// 	}
				// 	else
				// 	{
				// 		v.push_back(str);
				// 	}
					ll tmp1=x-a;
					ll tmp2=y-b;
					ll tmp3=z-c;
					ll tmp=(tmp1+1)*(tmp2+1)*(tmp3+1);
					ans=max(ans,tmp);
					//cout<<a<<" "<<b<<" "<<c<<" - "<<str<<"\n";
				}
			}
		}
		cout<<ans<<"\n";
	}
//	cout<<ans<<"\n";
	//cout<<"\n\n";
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
