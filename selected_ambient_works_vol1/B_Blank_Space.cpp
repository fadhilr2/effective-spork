#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& e : a) cin >> e;

  int x = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == 0){
      cnt += 1;
      x = max(x, cnt);
    }  else{
      cnt = 0;
    }
  }

  cout << x << "\n";

}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}