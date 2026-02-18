#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, k, x;
  cin >> n >> k >> x;

  int smallestSum = (k*(k+1))/2;
  int largestSum = ((n*(n+1))/2)-((((n-k+1)-1)*(n-k+1))/2);

  if(smallestSum <= x && x <= largestSum){
    cout << "YES\n";
  } else{
    cout << "NO\n";
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