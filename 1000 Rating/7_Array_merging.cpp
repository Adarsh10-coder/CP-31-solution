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
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)  cin >> a[i];
        for (ll i = 0; i < n; i++)  cin >> b[i];
        // input taken

        vector<ll> longest_subarray_a(2 * n + 1, 0);
        vector<ll> longest_subarray_b(2 * n + 1, 0);

        ll cnt = 1;
        for (int i = 1; i < n; i++){
            if (a[i] == a[i - 1]){
                cnt++;
            }
            else{
                longest_subarray_a[a[i - 1]] = max(longest_subarray_a[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        longest_subarray_a[a[n - 1]] = max(longest_subarray_a[a[n - 1]], cnt);
        cnt = 1;

        for (int i = 1; i < n; i++){
            if (b[i] == b[i - 1]){
                cnt++;
            }
            else{
                longest_subarray_b[b[i - 1]] = max(longest_subarray_b[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        longest_subarray_b[b[n - 1]] = max(longest_subarray_b[b[n - 1]], cnt);

        ll ans = -1;
        for (int i = 1; i <= 2 * n; i++){
            ans = max(ans, longest_subarray_a[i] + longest_subarray_b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}