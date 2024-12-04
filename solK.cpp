#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q,x;
    string cls;
    cin >> n >> q;
    map<string,int> mp;
    for(int i=0;i<n;i++) {
        cin >> cls >> x;
        mp[cls] += x;
    }
    int MAX = -1, total = 0;
    string m;
    for(int i=0;i<q;i++) {
        cin >> cls;
        if(mp[cls] > MAX) {
	    MAX = mp[cls];
	    m = cls;
	}
	total += mp[cls];
        cout << mp[cls] << '\n';
    }
    cout << "total:" << total << '\n';
    cout << "most:" << m  << '\n';
}
