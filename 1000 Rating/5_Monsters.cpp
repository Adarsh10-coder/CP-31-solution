#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<pair<ll, ll> > a(n);
        for (ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            a[i] = { x, i + 1 };
        }
        // input taken

        for (ll i = 0; i < n; i++){
            a[i].first = a[i].first % k;
            if (a[i].first == 0)
                a[i].first = k;
        }
        sort(a.begin(), a.end(), [&] (pair<ll, ll> b, pair<ll, ll> c) {
            if (b.first != c.first)
                return b.first > c.first;
            return b.second < c.second;
        });
        for (auto it : a)
            cout << it.second << " ";
        cout << endl;
    }
    return 0;
}