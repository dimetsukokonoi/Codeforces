#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define int long long
 
 
void solve(){
    
}
 
int32_t main() {
    fastIO;
    int t;
    cin>>t;
    string s;
    int count = 0;
    while(t--){
        cin>>s;
        if(s=="Tetrahedron"){
            count+=4;
        }
         if(s=="Cube"){
            count+=6;
        }
         if(s=="Octahedron"){
            count+=8;
        }
         if(s=="Dodecahedron"){
            count+=12;
        }
          if(s=="Icosahedron"){
            count+=20;
        }
        
    }
    cout<<count;
    return 0;
}