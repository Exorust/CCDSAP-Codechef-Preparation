#include<iostream>
#include<cstdio>
#include <string>
using namespace std;

long long no_of_sub(string s,int len) {
  int i=0;
  long long total=0;
  for(i=0;i<len;i++) {
    if(s.at(i) == '1') {
      total++;
    }
  }
  long long z = (total*(total+1))/2;
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
