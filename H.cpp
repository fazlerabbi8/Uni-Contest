#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int caseNum = 1;
    
    while (getline(cin, s)) {
        // Check for empty line (termination condition)
        if (s.empty()) {
            break;
        }
        
        int len = s.length();
        
        // Build prefix sum array
        // prefixSum[i] = number of 1's from index 0 to i-1
        vector<int> prefixSum(len + 1, 0);
        for (int i = 0; i < len; i++) {
            prefixSum[i + 1] = prefixSum[i] + (s[i] - '0');
        }
        
        int n;
        cin >> n;
        
        cout << "Case " << caseNum++ << ":" << endl;
        
        for (int q = 0; q < n; q++) {
            int i, j;
            cin >> i >> j;
            
            // Ensure i <= j
            if (i > j) {
                swap(i, j);
            }
            
            // Calculate number of 1's in range [i, j]
            int onesCount = prefixSum[j + 1] - prefixSum[i];
            
            // Calculate length of range
            int rangeLength = j - i + 1;
            
            // Check if all are same
            // All 1's: onesCount == rangeLength
            // All 0's: onesCount == 0
            if (onesCount == 0 || onesCount == rangeLength) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}