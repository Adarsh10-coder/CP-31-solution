#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b, n;
        cin >> a >> b >> n;
        long long x[n];
        for (int i = 0; i < n; i++){
            cin >> x[i];
        }
        // input taken

        long long maximum_time = 0;
        for (int i = 0; i < n; i++){
            maximum_time += min(x[i], a - 1);
        }
        cout << (maximum_time + b) << endl;
    }
    return 0;
}