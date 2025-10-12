#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        // input taken

        ll ra = a;
        ll rb = b;
        //! Ye loop dono numbers me se jitne bhi 2 ke factors hain, unhe divide karta jata hai
        while (ra % 2 == 0){
            ra /= 2;
        }
        while (rb % 2 == 0){
            rb /= 2;
        }
        if (ra != rb){
            cout << -1 << endl;
        }
        else{
            a /= ra;
            b /= rb;
            //! (a /= ra) aur (b /= rb) se hum sirf 2 ke powers rakhte hain

            a = log2(a); 
            b = log2(b); 
            //! log2(a) nikalta hai ki a me kitne 2 ke power the
            ll ans = ceil(abs(a - b) / 3.0);
            cout << ans << endl;
        }
    }
    return 0;
}