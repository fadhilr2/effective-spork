#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if(n % i != 0) break;
    if(n % i == 0) cnt += 1;
  }

  cout << cnt << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}