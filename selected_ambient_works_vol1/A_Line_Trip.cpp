#include "bits/stdc++.h"
using namespace std;

void solve(){
  int n;
  cin >> n;
  
  long long x;
  cin >> x;
  vector<long long> a(n);
  for(auto& e : a) cin >> e;

  long long V = a[0]-0;
  for(int i = 0; i < n-1; i++){
    V = max(a[i+1]-a[i], V);
  }

  V = max(V, 2*(x-a[n-1]));

  cout << V << "\n";
}

int main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}