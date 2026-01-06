#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    if (n < 1)
    {
        cout << "1";
    }
    else
    {
        cout << n;
    }
}