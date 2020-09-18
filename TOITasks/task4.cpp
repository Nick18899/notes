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
    int absa = abs(a - c);
    int absb = abs(b - d);
    int count;
    int gcdd = gcd(absa, absb); //gcd of coordinates differences
    count = absa / gcdd;
    absa /= gcdd;
    absb /= gcdd;
    int res = absa + absb - 1;
    cout << (res * gcdd) << "\n";
    return 0;
}