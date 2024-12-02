#include <bits/stdc++.h>
#define int int64_t
using namespace std;
static constexpr int mod = 1e9+7;
signed main() {
    int n, ans = 0;
    cin >> n;
    for(int status = 0; status < (1<<n); status++) {
        bool check = 1;
        for(int j=0;j<n-1;j++) {
            if((status>>j)&1 && (status>>(j+1))&1) {
                check = 0; break;
            }
        }
        if(check) ans += 1, ans %= mod;
    }
    cout << ans << '\n';
}