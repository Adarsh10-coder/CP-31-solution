#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        long long x_king, y_king;
        cin >> x_king >> y_king;
        long long x_queen, y_queen;
        cin >> x_queen >> y_queen;
        // inputs taken

        set<pair<int,int>> king_hits, queen_hits;

        for(int i = 0; i < 4; i++){
            king_hits.insert({x_king+dx[i]*a, y_king+dy[i]*b});
            king_hits.insert({x_king+dx[i]*b, y_king+dy[i]*a});

            queen_hits.insert({x_queen+dx[i]*a, y_queen+dy[i]*b});
            queen_hits.insert({x_queen+dx[i]*b, y_queen+dy[i]*a});
        }
        int ans = 0;
        // this method is used to find intersection
        for(auto position : king_hits){
            if(queen_hits.find(position) != queen_hits.end()){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}