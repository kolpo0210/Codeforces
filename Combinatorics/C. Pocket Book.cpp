/*
name:C. Pocket Book(152C)
Form distinct m-letter names by picking the character at each position independently from available characters.
For each position from 1 to m, identify the set of unique characters appearing at that index across all n original names.
The number of valid names is the product of the counts of unique characters at each position.
Calculate the product of these counts modulo 1000000007 (10^9 + 7).*/

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll MOD=1e9+7;
int main()
{
	ll n,m;
	cin>>n>>m;
	char ch[n][m];
	for(int i=0; i<n; i++)
	{
		string s;
		cin>>s;
		for(int j=0; j<m; j++)
		{
			ch[i][j]=s[j];
		}
	}
	ll ans=1;
	for(int i=0; i<m; i++)
	{
		set<char>st;
		for(int j=0; j<n; j++)
		{
			 st.insert(ch[j][i]);
			//cout<<ch[j][i];
		}
	ans=(ans*st.size())%MOD;
	}
	 cout<<ans;
}