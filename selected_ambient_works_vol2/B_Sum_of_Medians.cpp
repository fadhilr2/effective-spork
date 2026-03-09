#include "bits/stdc++.h"
using namespace std;
#define int long long

vector<int> psum(const vector<int> &arr) {
 vector<int> psums(arr.size() + 1);
 for (int i = 0; i < arr.size(); i++) { psums[i + 1] = psums[i] + arr[i]; }
 return psums;
}

void solve(){
  int n, k;
  cin >> n >> k;

  vector<int> a(n*k);
  for(auto& e : a) cin >> e;

  //skips
  int x = ((n+1)/2) - 1; 
  x = n - x; 

  int z = n*k;
  int ans = 0;
  while(k--){
    z -= x;
    ans += a[z];
  }

  cout << ans << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}