#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    int caseNum = 1;

    while(cin >> s){
        if(s.empty()){
            break;
        }

        int len = s.length();

        vector<int> prefixSum(len + 1, 0);
        for(int i = 0; i < len; i++){
            prefixSum[i + 1] = prefixSum[i] + (s[i] - '0');
        }

        int n; cin >> n;

        cout << "Case " << caseNum++ << ":" << "\n";
        
        for(int i = 0; i < n; i++){
            int q1, q2; cin >> q1 >> q2;

            if(q1 > q2){
                swap(q1, q2);
            }

            int onesCount = prefixSum[q2 + 1] - prefixSum[q1];
            
            int range = q2 - q1 + 1;

            if(onesCount == 0 || onesCount == range){
                cout << "Yes" << "\n";
            }else{
                cout << "No" << "\n";
            }
        }
    }
    return 0;
}