#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isFair(ll n){
    ll num = n;
    while (num != 0){
        int x = num % 10;
        if (x != 0 && n % x != 0){
            return false;
        }
        num /= 10;
    }
    return true;
    //! Agar pura loop chal gaya bina false ke
    //!  |-→ matlab sab digits divide kar rahe the → return true.
}

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        while (!isFair(n)){
            n += 1;
        }
        cout << n << endl;
    }
}