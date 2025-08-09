#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n , k;
        cin >> n >> k;
        vector<int> a(n*k);
        for(int i=0; i<n*k; i++){
            cin>> a[i];
        }
        // input taken

        long long pointer = n*k;
        long long sum = 0;
        while (k--){
            pointer -= (n/2 + 1);
            sum += a[pointer];
        }
        cout<<sum<<endl;
    }
    return 0;
}
