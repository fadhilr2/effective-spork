#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  int odd = 0, even = 0;
  for(int i = 0; i < 2*n; i++){
    int e;
    cin >> e;
    if(e % 2 == 0) even += 1;
    else odd += 1;
  }

  if(odd == even) cout << "Yes\n";
  else cout << "No\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}