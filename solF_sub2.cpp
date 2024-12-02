#include <bits/stdc++.h>
#define int int64_t
using namespace std;
static constexpr int mod = 1e9+7, MAXN = 2e5+5;
int ch[MAXN], notch[MAXN];
signed main() {
    int n;
    cin >> n;
    ch[1] = notch[1] = 1;
    for(int i=2;i<=n;i++) {
        ch[i] = notch[i-1] % mod;
        notch[i] = (ch[i-1] + notch[i-1]) % mod;
    }
    cout << (ch[n] + notch[n]) % mod << '\n';
}