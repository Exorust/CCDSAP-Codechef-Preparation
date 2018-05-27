#include <bits/stdc++.h>

 #define all(c) c.begin(), c.end()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  int count,x,y;
  for(int i=0,count=0;i<t;i++){
    x=0;
    y=0;
    count=0;
    int b;
    cin>>b;
    for(x=2;x<b;x+=2){
      y=0;
      y=b-x;
      y-=(y%2);
      count += (int)(y/2);
    }
    cout<<count<<endl;
  }

	return 0;
}
