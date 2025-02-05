#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
      long int n,m,x,y,l;
      cin >> n >> m >> x >> y >> l;
      long int h = 1;
      long int k = 1;
      if(l==1) {
          cout << n*m<<endl;
          continue;
      }
      h += (x-1)/l + (n-x)/l;
      k += (y-1)/l + (m-y)/l;
      cout << h*k<<endl;
  }
}