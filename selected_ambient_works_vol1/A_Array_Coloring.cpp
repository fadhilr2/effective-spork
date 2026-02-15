#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  int oddCnt = 0;
  for(auto e : a){
    cin >> e;
    if(e % 2 != 0) oddCnt += 1;
  }

  if(oddCnt % 2 != 0) cout << "NO\n";
  else cout << "YES\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}