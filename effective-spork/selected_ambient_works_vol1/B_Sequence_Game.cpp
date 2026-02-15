#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a;
  for(int i = 0; i < n; i++){
    int bi;
    cin >> bi;
    //the condition starts to apply 
    //for elements index greater than 0
    //hence check for i
    //check if bi-1 > bi
    if(i > 0 && a.back() > bi){
      a.push_back(1);
    }
    a.push_back(bi);
  }

  cout << a.size() << "\n";
  for(auto e : a) cout << e << " ";
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