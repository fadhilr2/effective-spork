#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n, k, x;
  cin >> n >> k >> x;

  if(x != 1){
    cout << "YES\n";
    cout << n << "\n";
    while(n){
      cout << 1 << " ";
      n -= 1;
    }
    cout << "\n";
    return;
  }

  //if x == 1 and k == 1, then there is no numbers
  if(k == 1){
    cout << "NO\n";
    return;
  //if k == 2 and n is odd, 
  //then its not possible to get odd sum from twos only
  } else if(k == 2 && n % 2 != 0){
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  cout << n/2 << "\n";
  int i = n/2;
  if(n % 2 != 0){
      cout << 3 << " ";
      i -= 1;
  }

  while(i){
    cout << 2 << " ";
    i -= 1;
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