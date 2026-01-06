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
   vector<vector<int>> arr(n, vector<int>(n));
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
   }

   vector<int> vans;
   for(int i=0; i<n; i++){
    vans.pb(arr[0][i]);
   }
   for(int i=1; i<n; i++){
    vans.pb(arr[i][n-1]);
   }

   vector<int> v;
   for(int i=1; i<=2*n; i++){
    v.pb(i);
   }

   unordered_set<int> s(vans.begin(),vans.end());
   vector<int> ms;
   for(auto a : v){
    if(s.find(a)==s.end()){
        ms.pb(a);
    }
   }
   vans.insert(vans.begin(), ms[0]);
   for(auto a : vans){
        cout << a << " ";
   }
    cout << nl;

}

int32_t main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    // solve();
    return 0;
}