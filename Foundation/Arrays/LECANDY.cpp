#include<iostream>
#include<cstdio>
#include <vector>
using namespace std;

void check(vector< vector<int> >& v,int i) {
  int N,C;
  vector<int> x= v.at(i);
  N = x.at(0);
  C = x.at(1);
  ios::sync_with_stdio(false);
  if(C>= ((N*(N+1))/2)) {
    cout<<"Yes";
  }
  else {
    cout<<"No";
  }
}

int main(int argc, char const *argv[]) {
  vector< vector<int> > v;
  int T,N,C,i;
  ios::sync_with_stdio(false);
  cin>>T;
  for(i=0;i<T;i++) {
    cin>>N;
    cin>>C;
    vector<int> x;
    for(j=0;j<N;j++) {
      
    }
    check(v,i);
  }


  return 0;
}
