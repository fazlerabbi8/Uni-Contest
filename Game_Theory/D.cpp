#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n){
    vector<bool> dp(n + 1, false);

    for (int i = 1; i <= n; i++) {
        for (int move : arr) {
            if (i - move >= 0 && dp[i - move] == false) {
                dp[i] = true;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dp[i]){
            cout << "W";
        }else{
            cout << "L";
        }
    }

    cout << "\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(k);
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}