#include <bits/stdc++.h>

 #define all(c) c.begin(), c.end()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

int trig(int b) {
  return (b>0)?((int)((b-2)/2) + trig(b-2)):(0);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,b;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>b;
    cout<<trig(b)<<endl;
  }

	return 0;
}
