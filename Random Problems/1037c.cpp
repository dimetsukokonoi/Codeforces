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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target  = v[k-1];
    sort(all(v));

    for(int i=n-1; i>=0; i--){
        if(v[i]<target){
            v.erase(v.begin()+i);
        }
    }
    // for(auto a : v){
    //     cout<<a<<" ";
    // }
    // cout<<nl;
    int diff = v[0];
    // cout<<diff<<nl;
    for(int i=1; i<v.size(); i++){
        if((v[i]-v[i-1])>diff){
            no;
            return;
        }
    }
    yes;
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