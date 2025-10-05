#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; 
    cin >> t;
    while (t--){
        ll n; 
        cin >> n;
        ll a[n]; 
        for (ll i = 0; i < n; i++) 
            cin >> a[i];
        // input taken
        
        ll total_two = 0; 
        ll cnt_two = 0; 
        for (ll i = 0; i < n; i++){
            if (a[i] == 2){
                total_two++; 
            }
        } 
        ll ans = -1; 
        for (ll i = 0; i < n; i++){
            if (a[i] == 2){ 
                cnt_two++;
            }
            if ((cnt_two) == (total_two - cnt_two)){
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl; 
    }
    return 0;
}


