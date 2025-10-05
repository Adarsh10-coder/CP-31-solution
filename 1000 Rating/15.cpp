#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;
	cin >> t; 
	while (t--){
		ll n, k;
		cin >> n >> k; 
		string s;
		cin >> s;
        // input taken

		vector<long long> prefix(n + 1, 0);
		for (int i = 0; i < n; i++){
			prefix[i + 1] = prefix[i] + (s[i] == 'W'); // Increment prefix sum if current cell is 'W'
        }
		ll minimum_cells = INT_MAX;
		// Iterate over each possible segment of length k
		for (int i = 0; i <= n - k; i++){
			// Calculate the number of 'W's in the current segment of length k
			ll diff = prefix[i + k] - prefix[i];
			minimum_cells = min(minimum_cells, diff);
		}
		cout << minimum_cells << endl;
	}
	return 0;
}