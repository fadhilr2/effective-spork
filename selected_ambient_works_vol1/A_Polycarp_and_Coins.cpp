#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){ 
  int n;
  cin >> n;

  int c2 = n/3;
  int c1 = n/3;
  int r = n % 3;

  if(r == 1){
    c1 = c2 + 1;   
  } else if (r == 2){
    c2 = c1 + 1;
  }

  cout << c1 << " " << c2 << "\n";
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}