#include <bits/stdc++.h>

 #define all(c) c.begin(), c.end()
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int t,i;
  cin>>t;
  char x;
  cin.get(x);
  for(int j=0;j<t;j++) {


    stack<char> stk;
    bool fail = false;
    int count = 0;
    int max_count = 0;
    char c;
    // vector<char> v;
    while(cin.get(c)) {
      if(c == '\n') {
        break;
      }
      // v.push_back(c);
      if(c == '>' && stk.empty() == true) {
        fail = true;
        count = 0;
        if(count >= max_count){
          max_count = count;
        }
      }
      else {
        if(c == '<'){
          stk.push('<');
          // count++;
          if(count >= max_count){
            max_count = count;
          }
        }
        else if(c == '>'){
          stk.pop();
          count+=2;
          if(count >= max_count){
            max_count = count;
          }
        }
      }
    }
    if(stk.empty() == false) {
      count = 0;
      if(count >= max_count){
        max_count = count;
      }
    }
    if(max_count!=1)
      cout<< max_count<<endl;
    else
      cout<<0<<endl;
    // for(auto it:v){
    //   cout<< (it);
    // }
  }
	return 0;
}
