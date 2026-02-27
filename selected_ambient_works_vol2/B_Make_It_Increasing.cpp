#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& e : a) cin >> e;

    if(n == 1){
        cout << 0 <<"\n";
        return;
    } 

    int ops = 0;

    for(int i = n-2; i >= 0; i--){
        while(a[i] >= a[i+1] && a[i] > 0){
            a[i] /= 2;
            ops += 1;
        }
        //both 0
        if(a[i] == a[i+1]){
            cout << -1 << "\n";
            return;
        }
    }

    cout << ops << "\n";
}


int32_t main(){

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}

