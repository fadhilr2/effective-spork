#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, m;
  cin >> n >> m;

  string x, s;
  cin >> x >> s;

  int ops = 0;
  for(int i = 0; i < 6; i++){
    if(x.find(s) != string::npos){
      cout << ops << "\n";
      return;
    } 
    x += x;
    ops += 1;
  }

  cout << -1 <<"\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}