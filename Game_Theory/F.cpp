#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long x, xr = 0;

    for(int i = 0; i < n; i++) {
        cin >> x;
        xr ^= x;
    }

    if(xr == 0){
        cout << "second\n";
    }else{
        cout << "first\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}