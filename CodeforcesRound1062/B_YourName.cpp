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
        string s1, s2; cin>>s1>>s2;
        vector<char> v1, v2;
        for(int i=0; i<s1.length(); i++){
            v1.pb(s1[i]);
        }
        for(int i=0; i<s2.length(); i++){
            v2.pb(s2[i]);
        }
        sort(all(v1));
        sort(all(v2));
        // for(char a : v1){
        //     cout<<a;
        // }
        // cout<<nl;

        // for(char a : v2){
        //     cout<<a;
        // }
        // cout<<nl;
        if(v1==v2) yes;
        else no;

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