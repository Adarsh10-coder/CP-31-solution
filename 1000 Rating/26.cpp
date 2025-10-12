#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll x, y, k;
        cin >> x >> y >> k;
        // input taken
        
        ll need = k * y + k - 1;
        //! Agar har trade (x - 1) sticks deta hai, to need sticks ke liye total trades honge:
        ll trade1 = ceil((long double)need / (x - 1));
        ll trade2 = k;
        cout << trade1 + trade2 << endl;
    }
    return 0;
}
