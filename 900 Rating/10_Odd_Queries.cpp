#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        while (q--){
            long long l, r, k;
            cin >> l >> r >> k;
            // input taken

            long long sum = 0;
            for (int i = 0; i < n; i++) {
                if (i >= l - 1 && i <= r - 1) {
                    sum += k;
                }
                else {
                    sum += a[i];
                }
            }
            if (sum % 2 != 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

// +++++++++++++++++++ TUTOR SOLUTION ++++++++++++++++++++++++++++++++++++++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long old_sum = 0;
        for (int i = 0; i < n; i++)
            old_sum += a[i];

        vector<long long> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];

        while (q--){
            long long l, r, k;
            cin >> l >> r >> k;
            long long sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];
            long long sum_to_add = (r - l + 1) * k;
            long long total_sum = old_sum - sum_to_remove + sum_to_add;
            if (total_sum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
