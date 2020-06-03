#include <iostream>
#include <set>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::pair;
using lint=long long;
using pii=pair<int,int>;

int main(){
  cin.tie(0);
  std::ios::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int,pii>> key_ar(n);
  for(int i=0;i<n;i++) cin>>key_ar[i].first>>key_ar[i].second.first;
  for(int i=0;i<n;i++){
    if(key_ar[i].first&15) key_ar[i].second.second=key_ar[i].first&key_ar[i].second.first;
    else key_ar[i].second.second=key_ar[i].first|key_ar[i].second.first;
  }
  for(int i=0;i<n;i++) cout<<key_ar[i].first<<key_ar[i].second.first<<key_ar[i].second.second<<endl;
  return 0;
}
