#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    if(!(cin >> n)) return;
    vector<int> a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    int x = 0, y = 0;
    for(int s = 0; s < n; s++){
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(a[i] >= b[(i + s) % n]){
                ok = false;
                break;
            }
        }
        if(ok) x++;
    }
    for(int s = 0; s < n; s++){
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(b[i] >= c[(i + s) % n]){
                ok = false;
                break;
            }
        }
        if(ok)y++;
    }
    cout <<1LL*x*y*n<< "\n";
}
int main(){
    int t;
    if(cin >> t){
        while(t--) solve();
    }
    return 0;
}
