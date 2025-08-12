#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long  n;
        cin >> n;
        // input taken

        int three_cnt = 0;
        int two_cnt = 0;
        while(n>0 && n%3==0){
            three_cnt++;
            n /= 3;
        }
        while(n>0 && n%2==0){
            two_cnt++;
            n /= 2;
        }
        if(n>1 || two_cnt>three_cnt){
            cout<<-1<<endl;
        }
        else{
            cout<<(three_cnt-two_cnt)+three_cnt<<endl;
        }
    }
    return 0;
}