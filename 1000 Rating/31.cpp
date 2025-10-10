#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s; 
    cin >> s;
    // input taken

    int flag = 0;
    for (int i=0; i<n-1; i++){
        if(s[i] > s[i + 1]){
            cout << "YES" << endl;
            cout << i + 1 << " " << i + 2 << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout << "NO" << endl;
    return 0;
}