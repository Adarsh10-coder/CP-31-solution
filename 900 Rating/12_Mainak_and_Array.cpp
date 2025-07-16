#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        //input taken

        long long answer = a[n - 1] - a[0];

        for (int i = 1; i < n; i++){
            answer = max(answer, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++){
            answer = max(answer, a[n - 1] - a[i]);
        }
        for (int i = 0; i < n - 1; i++){
            answer = max(answer, a[i] - a[i + 1]);
        }

        cout << answer << endl;
    }
    return 0;
}