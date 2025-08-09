#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n) {
    return (n & (n - 1)) == 0;
}
// This is a bitwise trick to check whether a number n is a power of 2
// A number that is a power of 2 has only one bit set in its binary representation

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        // input taken

        if (n == 1){
            cout << "NO" << endl;
        }
        else if (isPowerOfTwo(n)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
