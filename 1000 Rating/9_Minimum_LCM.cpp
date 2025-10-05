#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        // input taken

        // ll a = 1;
        // ll b = n - 1;
        // ll mini = LLONG_MAX;
        // ll ansA = 1, ansB = 1;
        // while (a != n - 1) {
        //     ll g = __gcd(a, b);
        //     ll lcm = (a / g) * b;
        //     if (lcm < mini) {
        //         mini = lcm;
        //         ansA = a;
        //         ansB = b;
        //     }
        //     a++;
        //     b--;
        // }
        // cout << ansA <<" "<< ansB<<endl;

        // ++++++++++++ BETTER METHOD ++++++++++
        ll ans_a = 1;
        ll ans_b = n - 1;
        for (ll i=2; i*i<=n; i++){
            if (n % i == 0){
                ans_a = n / i;
                ans_b = n - ans_a;
                break;
            }
        }
        cout << ans_a << " " << ans_b << endl;
    }
    return 0;
}