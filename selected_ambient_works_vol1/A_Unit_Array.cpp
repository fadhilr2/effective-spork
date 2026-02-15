#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto& e : a) cin >> e;

  int negatives = 0;
  int positives = 0;
  for(auto e : a){
    if(e == -1) negatives += 1;
    else positives += 1;
  };

  int x = 0;


  if(positives > negatives && negatives % 2 == 0){
    cout << x <<"\n";
    return;
  } else{
    if(positives < negatives){
      x = (negatives-positives)/2;
      if((negatives-positives) % 2 != 0) x += 1;
    } 
    negatives -= x;
    if(negatives % 2 != 0) x += 1;
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