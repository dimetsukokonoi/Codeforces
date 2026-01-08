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
    vector<int> v(n);
    int ans= 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    // int mx = *max_element(all(v));
    // int indx = max_element(all(v)) - v.begin();
    // v.erase(v.begin() + indx);

    // // for(auto a: v){
    // //     cout<<a<<" ";
    // // }
    // // cout<<nl;
    // for(int i=0; i<v.size()-1; i++){
    //     ans+=abs(v[i]-v[i+1]);
    // }
    // cout<<ans<<nl;
    // cout<<"Max element: "<<mx<<nl;
    // cout<<"Max Element index: "<<indx<<nl;

    // ans -= abs(v[indx]-v[indx-1])+abs(v[indx]-v[indx+1]);
    // cout<<"current diff: "<<ans<<nl;
    int mx  = -1;
    for(int i=0; i<n-1; i++){
        mx = max(mx, abs(v[i]-v[i+1]));
    }
    cout<<mx<<nl;

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