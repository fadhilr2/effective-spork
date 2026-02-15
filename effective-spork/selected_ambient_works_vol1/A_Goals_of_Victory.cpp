#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n-1);
  
  int sum = 0;
  for(auto& e : a){
    cin >> e;
    sum += e;
  };

  cout << sum * -1 <<"\n";


}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}