#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto& e : a){
    cin >> e;
    if(e % 2 == 0) e = 0;
    else e = 1;
  }

  int x = 0;
  for(int i = 0; i < n-1; i++){
    if(a[i] != a[i+1]) x += 1;
  }

  cout << n-x-1 << "\n";


}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}