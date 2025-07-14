#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        // input taken

        long long cnt = 1;
        long long maxi = 1;

        for (int i = 1; i < n; i++){
            if (s[i] == s[i - 1]){
                cnt++;
            }
            else{
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        maxi = max(maxi, cnt);
        cout << maxi + 1 << endl;
    }
    return 0;
}