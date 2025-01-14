#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,q;
  cin>>n>>q;
  vector<long long>ans(n),prefix(n+1,0);
  for(long long i=0;i<n;i++){
    cin>>ans[i];
  }
  for(long long i=1;i<=n;i++){
    prefix[i]=prefix[i-1]+ans[i-1];
  }
  while(q--){
    long long l,r;
    cin>>l>>r;
    long long sum = prefix[r]-prefix[l-1];
    cout<<sum<<endl;
}
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
}