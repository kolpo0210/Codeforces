/*
name:E. Two Round Dances(1433E)
Given an even number n, split n people into 2 indistinguishable round dances of size n/2 each.
A round dance is a circle where cyclic shifts are considered identical (a circle of k people has (k - 1)! unique arrangements).
Divide n people into two equal groups of size n/2 in C(n, n/2) / 2 ways.
Arrange each group in a circle in ((n/2) - 1)! unique ways.
Total ways = (C(n, n/2) / 2) * (((n/2) - 1)!)^2, which simplifies to (n - 1)! / (n / 2).*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	ll n;
	cin>>n;
	ll k=1;
	for(ll i=1; i<n; i++)
	{
		k*=i;
	}
	cout<<k/(n/2);
}