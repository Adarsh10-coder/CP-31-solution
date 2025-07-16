#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        //input taken

        int cnt = 0;
        for (int i=n-2; i>= 0; i--){
            while (a[i] >= a[i + 1]){
                cnt++;
                a[i] /= 2;
                if (a[i] == 0)
                    break;
            }
            if (a[i] == 0 && a[i + 1] == 0){
                cnt = -1;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}