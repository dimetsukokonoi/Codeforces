#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, s = 0;
    cin >> k >> n >> w;
    for (int i = 0; i <= w; i++)
    {
        s += i;
    }
    int ans = (k * s);
    if (n < ans)
    {
        cout << (ans - n);
    }
    else
    {
        cout << "0";
    }
    return 0;
}