#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int x;
  cin >> x;

  if(x > 9 || (x+1) > 9){
    cout << (x+1) / 10 << "\n";
  } else{
    cout << 0 << "\n";
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