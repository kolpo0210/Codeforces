//https://codeforces.com/contest/27/problem/E
//https://codeforces.com/contest/27/submission/315740784
//https://codeforces.com/profile/Sams_Arafin_Kolpo
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

vector<vector<ll>> factorizations;

void factorize(ll n, ll start, vector<ll>& current)
{
    if(n == 1)
    {
        if(!current.empty()) factorizations.push_back(current);
        return;
    }

    for(ll i = start; i <= n; ++i)
    {
        if(n % i == 0)
        {
            current.push_back(i);
            factorize(n / i, i, current);
            current.pop_back();
        }
    }
}

ll safe_pow(ll b, ll e) {
    ll r = 1;
    while(e--) {
        if(r > ULLONG_MAX / b) return ULLONG_MAX;
        r *= b;
    }
    return r;
}

int main()
{
    ll n;
    cin >> n;
    if(n==1)
    {
        cout << "1";
        return 0;
    }
    vector<int> p{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    vector<ll> current;
    factorize(n, 2, current);

    ll min_ans = LLONG_MAX;
    for(auto& fac : factorizations)
    {
        sort(fac.rbegin(), fac.rend());
        ll ans=1;
        bool overflow=false;
        for(size_t i = 0; i < fac.size(); ++i)
        {
            if(i>=p.size())
            {
                break;
            }
            ll power= safe_pow(p[i], fac[i]-1);
            if(power == ULLONG_MAX || ans > ULLONG_MAX/power)
            {
                overflow=true;
                break;
            }
            ans*=power;
        }
        if(!overflow&&ans<min_ans)
        {
            min_ans=ans;
        }
    }

    cout << min_ans;

    return 0;
}
