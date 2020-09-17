#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int max = -1;
    for (int i = 2320; i <= 10987; ++i)
    {
        if ((i % 2 == 0 || i % 7 == 0) && (i % 11) && (i % 13) && (i % 17) && (i % 19))
        {
            ++count;
            max = i;
        }
    }
    cout << count << " " << max << "\n"; 
    return 0;
}