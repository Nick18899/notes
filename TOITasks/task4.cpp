#include <bits/stdc++.h>
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || b == d)
    {
        cout << 0;
        return 0;
    }
    double dist = sqrt((float)(((a - c)*( a - c)) + (float)((b - d) * (b - d)))); // distance between segments
    double gcdd = gcd(abs(c - a), abs(b - d)); //gcd of coordinates differences
    int res = 2 * (dist  -  (floor(dist / gcdd) + 1)); 
    cout << res;
    return 0;
}