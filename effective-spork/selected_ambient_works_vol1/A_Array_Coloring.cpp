#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e: a) cin >> e;
  int oddNumbers = 0;
  for(auto e : a) if(e % 2 != 0)oddNumbers += 1;

  if(oddNumbers % 2 == 0){
    cout << "YES\n";
  } else{
    cout << "NO\n";
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