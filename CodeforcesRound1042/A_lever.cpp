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
#define       gcd(a,b)    __gcd(a,b)

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n; cin>>n;
    vector<int>v1(n), v2(n);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n; i++) cin>>v2[i];

    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++){
        vp.pb({v1[i], v2[i]});
    }
    int cnt  = 0;
    for(auto a : vp){
        if(a.first > a.second){
            cnt+=(a.first-a.second);
        }
    }
    cout<<cnt+1<<nl;
}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    //solve();
    return 0;
}