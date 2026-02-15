#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  if(is_sorted(a.begin(), a.end()) == 0){
    cout << 0 << "\n";
    return;
  }

  int minDiff = abs(a[1]-a[0]);
  int x = a[0];
  int y = a[1];
  for(int i = 0; i < n-1; i++){
    int diff = abs(a[i+1]-a[i]);
    if(diff < minDiff){
      minDiff = diff;
      x = a[i];
      y = a[i+1];
    }
  }

  //x+a=y-a
  //x-y=-2a
  //y-x=2a
  //(y-x)/2=a
  int ops = abs(y-x)/2;
  ops += 1;
  cout << ops << "\n";




}

int32_t main(){
 std::ios_base::sync_with_stdio(false);
 std::cin.tie(nullptr);
 
 int t;
 cin >> t;
 while(t--) solve();
 
 return 0;
}