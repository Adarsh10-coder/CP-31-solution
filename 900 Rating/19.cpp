#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long x, n;
        cin >> x >> n;
        // input taken

        long long final_pos;
        if (n % 4 == 1){
            final_pos = -n;
        }
        else if (n % 4 == 2){
            final_pos = 1;
        }
        else if (n % 4 == 3){
            final_pos = n + 1;
        }
        else if (n % 4 == 0){
            final_pos = 0;
        }

        if (x % 2 == 0){
            final_pos = x + final_pos;
        }
        else{
            final_pos = x - final_pos;
        }
        cout << final_pos << endl;
    }
    return 0;
}