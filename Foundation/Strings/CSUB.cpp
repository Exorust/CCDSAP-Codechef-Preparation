#include<iostream>
#include<cstdio>
#include <string>
using namespace std;

int no_of_sub(string s,int len) {
  int total=0,i=0;
  for(i=0;i<len;i++) {
    if(s.at(i) == '1') {
      total++;
    }
  }
  int z = (total*(total+1))/2;
  return z;
}

int main(int argc, char const *argv[]) {
  int T,N,i;
  string str1;
  cin>>T;
  for(i=0;i<T;i++) {
    cin>>N;
    cin>>str1;
    cout<< no_of_sub(str1,N)<<endl;
  }
  // cout<<endl;
  return 0;
}
