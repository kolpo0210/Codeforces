/*
name :B. Random Teams(478B)
Given n participants and m non-empty teams, every pair of participants in the same team forms a friendship.
A team of size x produces x * (x - 1) / 2 friendship pairs.
The task is to calculate the minimum (k_min) and maximum (k_max) possible total number of friendship pairs formed across all teams.
To minimize friendships, distribute the participants as evenly as possible among the m teams.
To maximize friendships, place 1 participant in each of m - 1 teams and put all remaining n - m + 1 participants into a single large team.
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	ll n, m;
	cin>>n>>m;
	ll k=n-(m-1);
	ll mx=(k*(k-1))/2;
	ll p=n/m;
	ll r=n%m;
	ll mn=r*((p+1)*p/2)+(m-r)*(p*(p-1)/2);
	cout<<mn<<" "<<mx;
}