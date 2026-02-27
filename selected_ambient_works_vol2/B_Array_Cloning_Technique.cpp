#include "bits/stdc++.h"

using namespace std;


void solve(){
    int n;
    cin >> n;
    
    int largestFreq = 0;
    vector<int> a(n);
    map<int, int> f = {};
    for(auto& e : a){
        cin >> e;
        f[e] += 1;
        largestFreq = max(largestFreq, f[e]);
    }

    if(f.size() == 1){
        cout << 0 << "\n";
        return;
    }

    int ops = 0;
    while(largestFreq < n){
        //clone it
        ops += 1;

        if(largestFreq * 2 <= n){
            ops += (largestFreq * 2) - largestFreq;
        } else if(largestFreq * 2 > n){
            ops += (n - largestFreq);
        }
        largestFreq *= 2;
    }
    cout << ops << "\n";
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}