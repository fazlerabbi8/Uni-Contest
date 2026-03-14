#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long xor_sum = 0;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        xor_sum ^= (x % 4);
    }
    if(xor_sum == 0){
        cout << "second\n";
    }
    else{
        cout << "first\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}