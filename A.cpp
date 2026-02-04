#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string str; cin >> str;
        int count = 0;
        sort(str.begin(), str.end());

        int sizeOfSub = unique(str.begin(), str.end())- str.begin();

        for(int i = 0; i < sizeOfSub; i++){
            count++;
        }
        cout << count << "\n";
    }

    
    return 0;
}