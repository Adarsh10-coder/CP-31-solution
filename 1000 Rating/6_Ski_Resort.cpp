#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // input taken

        for(int i=0; i<n; i++){
           if(a[i]>q){
              a[i]=0;
           }
           else{
              a[i]=1;
           }
        }
        ll cnt = 0;
        ll ans = 0;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                cnt++;
            }
            else{
                if(cnt >= k){
                    ll diff = cnt-k+1;
                    ans += (diff*(diff+1))/2;
                }
                cnt = 0;
            }
        }
        if(cnt >= k){ // bcoz if cnt not reset to 0
            ll diff = cnt-k+1;
            ans += (diff*(diff+1))/2;
        }
        cout << ans <<endl;
    }
    return 0;
}