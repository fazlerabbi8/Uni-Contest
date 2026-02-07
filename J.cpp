#include<bits/stdc++.h>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int maxLength = -1;
        
        // Try all possible starting positions
        for (int i = 0; i < n - 1; i++) {
            int currentGCD = arr[i];
            
            // Expand from position i
            for (int j = i + 1; j < n; j++) {
                currentGCD = gcd(currentGCD, arr[j]);
                
                // If GCD becomes 1, we found a valid subarray
                if (currentGCD == 1) {
                    // Maximum possible length from position i is (n - i)
                    // Since GCD will remain 1 if we extend further
                    maxLength = max(maxLength, n - i);
                    break; // No need to check further from this starting point
                }
            }
        }
        
        cout << maxLength << "\n";
    }
    
    return 0;
}

