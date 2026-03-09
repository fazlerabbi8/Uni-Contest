#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(ll N, ll M) {
    if (M == 1) {
        cout << 2 << "\n";
        return;
    }
    if (N % 2 == 1) {
        cout << 1 << "\n"; 
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll N, M;
        cin >> N >> M;
        solve(N, M);
    }

    return 0;
}
