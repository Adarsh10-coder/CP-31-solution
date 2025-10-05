#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        char color;
        cin >> color;
        string s;
        cin >> s;
        // input taken

        s += s;
        n *= 2;
        
        ll ind = -1;
        ll maxi = INT_MIN;
        for (int i=n-1; i>=0; i--){
            if (s[i] == 'g'){
                ind = i;
            }
            if (s[i] == color){
                ll diff = ind - i;
                maxi = max(maxi, diff);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}