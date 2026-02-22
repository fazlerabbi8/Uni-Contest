#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int maxSize = -1;

        for(int i = 0; i < n - 1; i++){
           int currentGCD = arr[i]; 

           for(int j = i + 1; j < n; j++){
            currentGCD = __gcd(currentGCD, arr[j]);
            
            if(currentGCD == 1){
                maxSize = max(maxSize, n - i);
                break;
            }

           }
        }
        cout << maxSize << "\n";
    }
}