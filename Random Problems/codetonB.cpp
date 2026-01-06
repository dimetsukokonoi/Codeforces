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
    int n; cin>>n;
    string s; cin>>s;
    int iindx = -1, jindx = -1;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            iindx = i;
            break;
        }
    }
     for(int i=n-1; i>=0; i--){
        if(s[i]=='B'){
            jindx = i;
            break;
        }
    }
    if(jindx==-1 || iindx ==-1){
        cout<<0<<nl;
        return;
    }
    int ans =  max(0LL,jindx-iindx);
    cout<<ans<<nl;
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