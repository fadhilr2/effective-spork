#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if(d >= b && a-b >= c-d ){
    cout << (d-b) + ((a+d-b)-c) << "\n";
    return;
  } else{
    cout << -1 << "\n";
  }

  

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}