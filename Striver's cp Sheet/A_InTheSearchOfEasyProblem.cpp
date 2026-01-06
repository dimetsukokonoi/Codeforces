#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cout << "HARD";
            ans = true;
            break;
        }
    }
    if (!ans)
    {
        cout << "EASY";
    }
    return 0;
}