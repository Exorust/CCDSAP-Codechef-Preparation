#include <bits/stdc++.h>

 #define all(c) c.begin(), c.end()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t,v_size;
  cin>>t;
  assert(t >= 1 && t <= 15);
  for(long long i=0;i<t;i++) {
    cin>>v_size;
    vector<queue<long long> > vs;
    vs.resize(v_size);
    long long count = 0;
    long long p =1;
    for(long long j=0;j<v_size;j++){
      long long s_size;
      cin>>s_size;
      assert(s_size>=1);
      count +=s_size;
      p *=(s_size+1);
      for(long long k=0;k<s_size;k++) {
        long long tmp;
        cin>>tmp;
        assert(tmp>=1 && tmp<=1000);
        (vs.at(j)).push(tmp);
      }
    }
    assert(p>=1 && p<=1000000);
    stack<long long> lfs;
    for(long long l=0;l<count;l++){
      long long tmp;
      cin>>tmp;
      lfs.push(tmp);
    }
    bool lfs_sucess = true;
    for(long long l=0;l<count;l++){
      long long current = lfs.top();
      lfs.pop();
      bool success = false;
      for(long long j=0;j<v_size;j++){
        if((vs[j]).front() == current) {
          (vs[j]).pop();
          success =true;
          break;
        }
      }
      if(success == false) {
        lfs_sucess = false;
        break;
      }
      else{
        lfs_sucess= true;
      }
    }
    cout<< ((lfs_sucess)?"Yes":"No")<< endl;
  }

	return 0;
}
