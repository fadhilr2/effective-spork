#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> freq = {};
  for(auto& e : a){
    cin >> e;
    freq[e] += 1;
  };

  if(freq.size() > 2){
    cout << "No\n";
    return;
  } else if(freq.size() == 1){
    cout << "Yes\n";
    return;
  }

  if(freq.begin()->second == n/2 || freq.rbegin()->second == n/2){
    cout << "Yes\n";
  } else{
    cout << "No\n";
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