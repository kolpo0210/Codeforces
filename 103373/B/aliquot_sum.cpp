//https://codeforces.com/gym/103373/submission/315534941
//https://codeforces.com/profile/Sams_Arafin_Kolpo
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map <ll,int> prime_factors(ll n)
{
    map <ll, int> pf;
    while(n%2 == 0)
    {
        pf[2]++;
        n=n/2;
    }

    for(int i=3; i*i<=n; i+=2)
    {
        while(n%i==0)
        {
            pf[i]++;
            n=n/i;
        }
    }

    if(n>1)
    {
        pf[n]++;
    }
    return pf;
}
void sod(ll n)
{
    map <ll, int> a1 = prime_factors(n);
    int ans = 1;
    ll tmp;
    for(auto [p,po]:a1)
    {
        po++;
        tmp = pow(p, po);
        tmp--;
        tmp = tmp/(p-1);
        ans*=tmp;
    }
    ans-=n;
    if(ans > n)
    {
        cout << "abundant" << endl;
    }
    else if(ans < n)
    {
        cout << "deficient" << endl;
    }
    else
    {
        cout << "perfect" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        sod(n);
    }
    return 0;
}
