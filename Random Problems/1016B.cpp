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
    // int n; cin>>n;
    string s; cin>>s;
    int n =  s.size();
    int cnt0f = 0;
    for(int i=n-1; i>=0; i--){
        if(s[i]!='0'){
            break;
        }
        else{
            cnt0f++;
            s.erase(s.begin()+i);
        }
    }
    int cnt0 = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') cnt0++;
    }
    if(cnt0>0){
        cout<<s.size()-(cnt0+1)+cnt0f<<nl;
    }
    else{
        cout<<s.size()-1+cnt0f<<nl;
    }
    // cout<<s<<nl;

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