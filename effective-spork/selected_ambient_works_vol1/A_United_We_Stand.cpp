#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  map<int,int> freq = {};
  for(auto& e : a){
    cin >> e;
    freq[e] += 1;
  };

  if(freq.size() == 1){
    cout << -1 << "\n";
    return;
  }

  auto max_it = max_element(a.begin(), a.end());
  int max_ptr = *max_it;

  cout << a.size() - freq[max_ptr] << " " << freq[max_ptr] << "\n";
  for(auto e : a){
    if(e != max_ptr) cout << e << " ";
  }
  cout << "\n";
  for(auto e : a){
    if(e == max_ptr) cout << e << " ";
  }
  cout << "\n";

  
}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}