#include<iostream>
#include<cstdio>
#include <vector>
using namespace std;


int main(int argc, char const *argv[]) {
  vector<int> v;
  vector<int> vc;
  int T,N,C,i,j,z,sum;
  cin>>T;
  for(i=0;i<T;i++) {
    sum=0;
    cin>>N>>C;
    vc.push_back(C);
    for(j=0;j<N;j++) {
      cin>>z;
      sum += z;
    }
    v.push_back(sum);
    sum=0;
  }

  for(i=0;i<T;i++) {
    if(vc.at(i)>v.at(i)) {
      cout<<"Yes"<<endl;
    }
    else {
      cout<<"No"<<endl;
    }
  }
  return 0;
}
