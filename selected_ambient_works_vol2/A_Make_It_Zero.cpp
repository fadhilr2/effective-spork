#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  if(n % 2 == 0){
    cout << 2 << "\n";
    cout << 1 << " " << n << "\n";
    cout << 1 << " " << n << "\n";
  } else{
    cout << 4 << "\n";
    cout << 1 << " " << n-1 << "\n";
    cout << 1 << " " << n-1 << "\n";
    cout << n-1 << " " << n << "\n";
    cout << n-1 << " " << n << "\n";
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