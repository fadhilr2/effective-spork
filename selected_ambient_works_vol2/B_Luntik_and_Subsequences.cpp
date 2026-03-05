#include "bits/stdc++.h"
using namespace std;

#define int long long


void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    int zeros = 0;
    int ones = 0;
    for(auto& e : a){
        cin >> e;
        if(e == 0) zeros += 1;
        else if(e == 1) ones += 1;
    }

    cout << ((long long)1 << zeros) * ones << '\n';
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