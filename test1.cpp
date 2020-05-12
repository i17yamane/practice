#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using lint=long long;

int main(){
  cin.tie(0);
  std::ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<int> ar(n);
  for(auto&& i=ar.begin();i!=ar.end();i++) cin>>*i;
  for(auto&& x:ar) cout<<x<<"\n";
  cout<<endl;
  return 0;
}
