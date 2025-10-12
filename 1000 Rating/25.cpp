#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> b(n);
        for (int i = 0; i < n; i++)  cin >> b[i];
        // input taken

        set<int> s;
        for(int i=0; i<n; i++){
            s.insert(b[i]);
        }
        if(s.size() < n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}