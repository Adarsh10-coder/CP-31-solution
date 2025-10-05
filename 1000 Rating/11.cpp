#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    ll i = -1;
    ll j = n - 1;
    ll team_size = 1;
    ll cnt = 0;
    while (i < j){
        if ((a[j] * team_size) <= d && i < j){
            i++;
            team_size++;
        }
        else{
            cnt++;
            j--;
            team_size = 1;
        }
    }
    cout << cnt << endl;
    return 0;
}