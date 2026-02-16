#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  int x = 0;
  vector<int> a(n);
  for(auto& e : a){
    cin >> e;
    x ^= e;
  }


  if(n % 2 ==0){
    if(x == 0){
      cout << 1 << "\n";
    } else{
      cout << -1 << "\n";
    }
  } else{
    cout << x << "\n";
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