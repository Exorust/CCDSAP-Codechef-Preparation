#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int T,i,j,len;
  cin>>T;
  string s,s1,s2;

  for(i=0;i<T;i++) {
    int arr1[26]={0};
    int arr2[26]={0};
    cin>>s;
    len = s.length();
    s1 = s.substr(0,len/2);
    if(len%2==0) {
      s2 = s.substr((len/2));
    }
    else {
      s2 = s.substr((len/2)+1);
    }
    // cout << s1 <<s2;
    for(j=0;j<len/2;j++) {
      int x1 = (int)s1[j];
      int x2 = (int)s2[j];
      x1-=97;
      x2-=97;
      arr1[x1]++;
      arr2[x2]++;
    }
    bool ist =true;
    for(j=0;j<26;j++) {
      if(arr1[j] != arr2[j]) {
        ist = false;
        cout<<"NO"<<endl;
        break;
      }
    }
    if(ist == true) {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
