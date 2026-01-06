#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, mx = 0;
    int passenger = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        passenger = passenger - a;
        passenger = passenger + b;
        mx = max(mx, passenger);
    }

    cout << mx;
}