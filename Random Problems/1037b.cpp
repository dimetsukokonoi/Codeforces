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
    for(int i=0; i<n; i++) cin>>v[i];
    int cnt  = 0, d= k;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            d--;
        }
        else if(v[i]==1 && d!=0){
            d = k;
        }
        if(d==0){
            cnt++;
            d= k;
            i++;
        }
    }
    cout<<cnt<<nl;
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