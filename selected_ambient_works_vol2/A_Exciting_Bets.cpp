#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int a, b;
    cin >> a >> b;

    if(a == b){
        cout << 0 << " "<< 0 << "\n";
    } else{
        int g = abs(a-b);

        cout << g << " " << min(a % g, g-a%g) << "\n";
    }
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