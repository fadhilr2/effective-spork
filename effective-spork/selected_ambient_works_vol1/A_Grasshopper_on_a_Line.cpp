#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int x, k;
  cin >> x >> k;

  if(x < k || x % k != 0){
    cout << 1 << "\n";
    cout << x << "\n";
    return;
  }

  cout << 2 << "\n";
  cout << 1 << " " << x-1 << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}