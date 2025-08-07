#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        long long a , b;
        cin >> a >> b;
        //input taken

        if(a==b){
            cout << 0 << " " << 0 <<endl;
        }   
        else{
            long long e = abs(a-b);
            long long m = min(a%e,e-a%e);
            cout << e << " " << m << '\n';
        }
    }
    return 0;
}