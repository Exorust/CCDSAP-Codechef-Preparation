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
  for(int j=0;j<t;j++) {
    string str;
    stack<char> stk;
    cin>>str;
    bool fail = false;
    int count = 0;
    int max_count = 0;
    for(i=0;i<str.length();i++) {
      if(str.at(i) == '>' && stk.empty() == true) {
        fail = true;
        count = 0;
        if(count >= max_count){
          max_count = count;
        }
      }
      else {
        if(str.at(i) == '<'){
          stk.push('<');
          // count++;
          if(count >= max_count){
            max_count = count;
          }
        }
        else if(str.at(i) == '>'){
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
  }
	return 0;
}
