#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        // input taken

        unordered_set<char> st;
        vector<ll> pre_cnt(n + 1, 0);
        vector<ll> suf_cnt(n + 1, 0);

        for (ll i = 1; i <= n; i++){
            st.insert(s[i - 1]);
            pre_cnt[i] = st.size(); 
        }
        st.clear();
        for (ll i = n; i >= 1; i--){
            st.insert(s[i - 1]);
            suf_cnt[i] = st.size(); 
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++) 
            ans = max(ans, pre_cnt[i] + suf_cnt[i + 1]);
        cout << ans << endl;
    }
    return 0;
}