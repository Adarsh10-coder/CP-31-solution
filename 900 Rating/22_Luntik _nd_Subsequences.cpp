#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //input taken

        int zero_cnt = 0;
        int one_cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                zero_cnt++;
            }
            if(a[i]==1){
                one_cnt++;
            }
        }
        // cout<<pow(2,zero_cnt)*one_cnt<<endl;
        cout << (1LL << zero_cnt) * one_cnt << endl; //alternate method
    }
    return 0;
}