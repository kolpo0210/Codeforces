//https://codeforces.com/contest/2094/submission/315424741
//https://codeforces.com/profile/Sams_Arafin_Kolpo
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> c1(30, 0);
    for (int num : a) {
        for (int i = 0; i < 30; ++i) {
            if (num & (1 << i)) {
                c1[i]++;
            }
        }
    }

    ll ms = 0;
    for (int num : a) {
        ll cs = 0;
        for (int i = 0; i < 30; ++i) {
            if (num & (1 << i)) {
                cs += (ll)(n - c1[i]) * (1 << i);
            } else {
                cs += (ll)c1[i] * (1 << i);
            }
        }
        if (cs > ms) {
            ms = cs;
        }
    }

    cout << ms << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
