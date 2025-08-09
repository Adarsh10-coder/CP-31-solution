#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n , x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        // input taken

        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        long long mini = ceil((double)sum/x);
        // ceil((double)..) --> it help to get nearest integer
        long long maxi = 0;
        for(int i=0; i<n; i++){
            maxi += ceil((double)a[i] / x);
        }
        cout<<mini<<" "<<maxi<<endl;
    }
    return 0;
}
