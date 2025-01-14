#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,q;
  cin>>n>>q;
  vector<long long>ans(n),diff(n+1,0);
  for(long long i=0;i<n;i++){
    cin>>ans[i];
  }
  while(q--){
    long long l,r,val;
    cin>>l>>r>>val;
    l = l-1;
    r=r-1;
    diff[l]+=val;
    if(r+1<n){
      diff[r+1]-=val;
    }
}
long long add = 0;
for(long long i=0;i<n;i++){
  add+=diff[i];
  ans[i]+=add;
}

for(long long i=0;i<n;i++){
  cout<<ans[i]<<" ";
}

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}
