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
    int n, sum; cin>>n>>sum;
    vector<int> v(n);
    int add = 0;
    int cnt[3] = {0,0,0};
    for(int i=0; i<n; i++){
        cin>>v[i];
        add+=v[i];
        cnt[v[i]]++;
    }
    if(sum<add || sum-add==1){
        while(cnt[0]--) cout<<"0 ";
        while(cnt[2]--) cout<<"2 ";
        while(cnt[1]--) cout<<"1 ";
    }
    else cout<<"-1";
    cout<<nl;
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