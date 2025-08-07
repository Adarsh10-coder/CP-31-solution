#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //input taken

        /*
        vector<int> ans;
        int i = 0;
        int j = n-1;
        while(i<n){
            int and_value = a[i]&a[j];
            ans.push_back(and_value);
            i++;
            j--;
        }
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if(ans[i]<mini){
                mini = ans[i];
            }
        }
        cout<< mini <<endl;
        */

        long long total_and = a[0];
        for(int i=1; i<n; i++){
            total_and &= a[i];
        }
        cout<<total_and<<endl;
    }
    return 0;
}