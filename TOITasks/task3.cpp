#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int nmlcm = (n * m) / gcd(n, m);
    int alllcm = (nmlcm * k) / gcd(nmlcm, k);
    cout << alllcm;
    return 0;
}