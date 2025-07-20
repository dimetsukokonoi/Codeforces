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

void solve() {
    int n, k; cin>>n>>k;
    int mx = 0;
    // vector<int> v1(n), v2(n);
    vector<pair<pair<int,int>,int>>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first.first>>v[i].first.second>>v[i].second;
    }
    sort(all(v));
    for(auto a : v){
        int l =  a.first.first; int r  = a.first.second;
        if(k>=l && k<=r){
            k = max(k,a.second);
        }
    }
    cout<<k<<nl;
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