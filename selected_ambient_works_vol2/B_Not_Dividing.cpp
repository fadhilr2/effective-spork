#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& e : a) cin >> e;

  for(auto& e : a){
    if(e == 1) e += 1;
  }

  for(int i = 0; i <n-1; i++){
    if(a[i+1] % a[i] == 0){
      a[i+1] += 1;
    }
  }

  for(auto e : a) cout << e << " ";
  cout << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}