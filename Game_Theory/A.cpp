#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<bool> dp(n + 1, false);

    for (int i = 2; i <= n; i++)
    {
        if (i - 2 >= 0 && dp[i - 2] == false)
        {
            dp[i] = true;
        }
        if (i - 3 >= 0 && dp[i - 3] == false)
        {
            dp[i] = true;
        }
        if (i - 5 >= 0 && dp[i - 5] == false)
        {
            dp[i] = true;
        }
    }

    if (dp[n])
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
    }
}

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

        solve(n);
    }
}