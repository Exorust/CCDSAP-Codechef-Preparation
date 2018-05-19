#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,T,C,i,j;
  //scanf("%d\n", &N );
  ios::sync_with_stdio(false);
  cin>>T;
  for(i=0;i<T;i++) {
    cin>>N>>C;
    for(j=0;j<N;j++){
      int z;
      cin>>z;
      C-= z;
    }
    if(C<0) {
      cout<<"No"<<endl;
    }
    else {
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}
