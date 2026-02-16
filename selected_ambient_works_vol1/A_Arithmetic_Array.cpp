#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  
  int sum = 0;
  for(int i = 0; i < n; i++){
    int e;
    cin >> e;
    sum += e;
  };

  if(sum == n){
    cout << 0 << "\n";
  } else if(sum < n){
    //sum+k=n+1
    cout << 1 << "\n";
  } else{
    cout << sum-n << "\n";
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