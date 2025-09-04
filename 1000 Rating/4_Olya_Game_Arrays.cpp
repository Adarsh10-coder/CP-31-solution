#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> second_min;
        long long min_first = LLONG_MAX;

        while (n--) {
            int m;
            cin >> m;
            vector<long long> a(m);
            for (auto &x : a) cin >> x;

            sort(a.begin(), a.end());
            second_min.push_back(a[1]);      
            min_first = min(min_first, a[0]);
        }
        sort(second_min.begin(), second_min.end());
        long long sum = accumulate(second_min.begin(), second_min.end(), 0LL);

        cout << min_first + sum - second_min[0] << endl;
    }
    return 0;
}
