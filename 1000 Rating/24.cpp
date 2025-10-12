#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> a(n, vector<ll>(m));
        ll neg_cnt = 0;
        ll sum = 0;
        ll mini = LLONG_MAX; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] < 0){
                    neg_cnt++;
                }
                sum += abs(a[i][j]);       
                mini = min(mini, abs(a[i][j]));
            }
        }
        if (neg_cnt % 2 == 0) {
            cout << sum << endl;
        } 
        else {
            cout << sum - 2 * mini << endl;
            //! Pehle contribution = +mini
            //! Ab contribution = -mini
            //!   |--→ difference = +mini - (-mini) = 2 * mini
        }
    }
    return 0;
}
