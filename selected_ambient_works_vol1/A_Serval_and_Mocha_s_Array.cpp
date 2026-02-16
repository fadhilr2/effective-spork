#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(__gcd(a[i], a[j]) <= 2){
        cout << "Yes\n";
        return;
      }
    }
  }

  cout << "No\n";


}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}