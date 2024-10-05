#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n, x3, x5;
  cin >> n;  
  if(n%3==2) {
    if(n-5<0) {
      cout << -1;
      return 0;
    }
    x5 = (n-5)/15*3+1;
  } else if(n%3==1) {
    if(n-10<0) {
      cout << -1;
      return 0;
    }
    x5 = (n-10)/15*3+2;
  } else {
    x5 = n/15*3;
  }
  x3 = (n-5*x5)/3;
  cout << x3+x5;
  return 0;
}