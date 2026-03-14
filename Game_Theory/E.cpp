#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int nim = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nim ^= x;
    }

    if (nim == 0)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speed.in", "r", stdin);
    freopen("speed.out", "w", stdout);
    
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}