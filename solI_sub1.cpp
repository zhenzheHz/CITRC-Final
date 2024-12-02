#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    char b;
    cin >> a >> b;
    for(char &ch : a) {
        if(ch == b) 
            return cout << "fake\n",0;
    }
    cout << "real\n";
}