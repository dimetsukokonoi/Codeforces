#include <bits/stdc++.h>
using namespace std;

#define         fastIO   ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define           int    long long
#define          all(v)   v.begin(), v.end()
#define         rall(v)   v.rbegin(), v.rend()
#define           pb      push_back
#define          sz(a)    (int)a.size()
#define           nl      "\n"
#define          yes      cout << "YES\n"
#define           no      cout << "NO\n"
#define      isEven(l)    ((l) % 2 == 0)
#define          gcd(a,b) __gcd(a,b)

void solve() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int ans = -1;
    for(int i = 2; i<n; i++){
        if (min(v[i - 2], v[i - 1]) <= v[i] && max(v[i - 2], v[i - 1]) >= v[i]){
            ans = 1;
        } 
    }
    for(int i=0; i<n-2; i++){
        if (min(v[i + 1], v[i + 2]) <= v[i] && v[i] <= max(v[i + 1], v[i + 2])){
            ans = 1;
        }
    }
    for(int i=1; i<n; i++){
        if(abs(v[i]-v[i-1])<=1){
            ans =  0;
        }
    }
    cout<<ans<<nl;

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