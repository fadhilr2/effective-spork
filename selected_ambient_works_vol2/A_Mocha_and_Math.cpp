#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto& e : a) cin >> e;

    int and_ = a[0];

    for(auto e : a){
        and_ &= e;
    }

    cout << and_ << "\n";

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