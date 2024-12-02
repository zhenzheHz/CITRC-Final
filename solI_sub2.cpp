#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.size()-b.size()+1;i++) {
        string temp = a.substr(i,b.size());
        if(temp == b)
            return cout<<"fake\n",0;
    } 
    cout << "real\n";
}