#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)  cin >> a[i];
        // input taken

        sort(a.rbegin(), a.rend());
        for (auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}