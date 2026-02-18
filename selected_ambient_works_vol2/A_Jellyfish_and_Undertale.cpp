#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int a, b, n;
  cin >> a >> b >> n;

  vector<int> x(n);
  for(auto& e : x) cin >> e;

  int totalTime = b;
  for(auto e : x) totalTime += (min((1+e), a)-1);

  cout << totalTime << "\n";

  
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}