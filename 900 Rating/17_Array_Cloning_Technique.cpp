#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        //input taken

        map<long long, long long> mp;
        for (long long i = 0; i < n; i++){
            mp[a[i]]++;
        }
        long long maxi_freq = 0;
        for (auto i : mp){
            maxi_freq = max(maxi_freq, i.second);
        }
        long long operations = 0;
        while (maxi_freq < n){
            operations++; // to clone the array
            if (maxi_freq * 2 <= n){
                operations += maxi_freq; // swap all the copies
                maxi_freq *= 2;
            }
            else{
                operations += n - maxi_freq; // swap only required copies
                maxi_freq = n;
            }
        }
        cout << operations << endl;
    }
    return 0;
}