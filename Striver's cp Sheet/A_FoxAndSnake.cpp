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
    int n, m; cin>>n>>m;
    vector<vector<char>> mat (n, vector<char>(m,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2==0){
                mat[i][j]= '#';
            }
            else if(i%4==1){
                if(j==m-1) mat[i][j] = '#';
                else mat[i][j] = '.';
            }
            else{
                if(j==0) mat[i][j] = '#';
                else mat[i][j] = '.';
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j];
        }
        cout<<nl;
    }
}

int32_t main() {
    fastIO;
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve( );
    return 0;
}