#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    for (int i = min(m, n); i < m * n; ++i)
    {
        if ((i % m == 0) && (i % n == 0))
        {
            cout << i << " ";
        }
    } 
    return 0;
}