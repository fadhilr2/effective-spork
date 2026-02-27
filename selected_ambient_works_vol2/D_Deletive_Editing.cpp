#include "bits/stdc++.h"

using namespace std;


void solve(){
    string s, t;
    cin >> s >> t;

    map<char, int> tFreq = {};
    for(auto e : t) tFreq[e] += 1;
    map<char, int> sFreq = {};
    for(auto e : s ) sFreq[e] += 1;
    
    if(sFreq.size() < tFreq.size()){
        cout << "NO\n";
        return;
    }


    for(auto& e : sFreq){
        if(e.second < tFreq[e.first]){
            cout << "NO\n";
            return;
        }
        while(e.second > tFreq[e.first]){
            auto index = s.find(e.first);

            s.erase(index, 1);

            e.second -= 1;
        }
    }

    if(s == t) cout << "YES\n";
    else cout << "NO\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}