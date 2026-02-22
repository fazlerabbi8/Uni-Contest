#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int gcd1 = arr[0];
        for (int i = 0; i < n; i++)
        {
            gcd1 = __gcd(gcd1, arr[i]);

        }
        if(gcd1 == 1){
            cout << n << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int maxLength = -1;

//         for (int i = 0; i < n - 1; i++) {
//             int currentGCD = arr[i];

//             for (int j = i + 1; j < n; j++) {
//                 currentGCD = gcd(currentGCD, arr[j]);

//                 if (currentGCD == 1) {
//                     maxLength = max(maxLength, n - i);
//                     break;
//                 }
//             }
//         }

//         cout << maxLength << "\n";
//     }

//     return 0;
// }
