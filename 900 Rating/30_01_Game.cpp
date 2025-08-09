#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        // input taken

        int one_cnt = 0;
        int zero_cnt = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
                zero_cnt++;
            else
                one_cnt++;
        }
        int operations = min(zero_cnt, one_cnt);
        if (operations % 2 != 0){
            cout <<"DA"<<endl;
        }
        else{
            cout <<"NET"<<endl;
        }
    }
    return 0;
}