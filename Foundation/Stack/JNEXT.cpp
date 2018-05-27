#include <bits/stdc++.h>

 #define all(c) c.begin(), c.end()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n;
  cin>>t;

  for(int i=0;i<t;i++) {

    cin>>n;
    vector<int> v;
    for(int j=0;j<n;j++){
      int tmp;
      cin>>tmp;
      v.push_back(tmp);
    }
    // v.resize(n+2);
    int k;
    for(k=n-2;k>=0;k--){
        if(v[k]<v[k+1]) {
          break;
        }
    }
    int l;
    for(l=n-1;l>k;l--) {
      if(v[k]<v[l]) {
        break;
      }
    }
    swap(v[k],v[l]);
    reverse(v.begin()+k+1,v.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
      cout<<it;
    }
    cout<<endl;
  }

	return 0;
}
