#include <bits/stdc++.h>
using namespace std;

bool dp[16][16];

int dx[4] = {-2, -2, 1, -1};
int dy[4] = {1, -1, -2, -2};

void solve()
{

    for (int x = 1; x <= 15; x++)
    {
        for (int y = 1; y <= 15; y++)
        {

            bool winning = false;

            for (int k = 0; k < 4; k++)
            {

                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx >= 1 && nx <= 15 && ny >= 1 && ny <= 15)
                {

                    if (dp[nx][ny] == false)
                    {
                        winning = true;
                    }
                }
            }

            dp[x][y] = winning;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {

        int x, y;
        cin >> x >> y;

        if (dp[x][y]){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
            
    }
}

int main()
{
    solve();
}