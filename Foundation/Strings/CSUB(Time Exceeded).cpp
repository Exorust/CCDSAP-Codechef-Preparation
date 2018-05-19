#include<iostream>
#include<cstdio>
#include <string>
using namespace std;

int no_of_sub(string s) {
  int len = s.length();
  if(len<=0) {
    return 0;
  }
  int index = s.find("1");
  if(index>len) {
    return 0;
  }
  int total=0,i=0;
  fflush(stdout);
  for(i=0;i<len;i++) {
    if(s.at(i) == '1') {
      total++;
    }
  }

  string shorter(s.substr(index+1));
  // cout<<shorter<<total<<endl;
  return total + no_of_sub(shorter);
}

int main(int argc, char const *argv[]) {
  int T,N,i;
  string str1;
  cin>>T;
  for(i=0;i<T;i++) {
    cin>>N;
    cin>>str1;
    cout<< no_of_sub(str1)<<endl;
  }
  // cout<<endl;
  return 0;
}
