#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define int long long
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()
#define nl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define isEven(l) ((l) % 2 == 0)
#define gcd(a,b) __gcd(a,b)

void solve() {
    string s;
    cin >> s;
    int mn = 9;
    for (char c : s) {
        if(c-'0'<mn){
            mn = c-'0';
        }
    }
    cout << mn << nl;
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
