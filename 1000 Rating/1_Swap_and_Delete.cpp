#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        // input taken
        
        int n = s.size();
        int zero_cnt = 0, one_cnt = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0')
                zero_cnt++;
            else
                one_cnt++;
        }

        int length_t = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '0' && one_cnt > 0){
                one_cnt--;
                length_t++;
            }
            else if (s[i] == '1' && zero_cnt > 0){
                zero_cnt--;
                length_t++;
            }
            else{
                break;
            }
        }
        cout << (n - length_t) << endl;
    }
    return 0;
}