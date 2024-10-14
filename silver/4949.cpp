#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  while(true) {
    string line;
    stack<int> check;
    bool flag = true;
    getline(cin, line);
    if(line == ".") {
      break;
    }
    for(const auto& ch : line) {
      if(ch == '(') {
        check.push('(');
      } else if(ch == ')') {
        if(check.empty() || check.top() != '(') {
          flag = false;
          break;
        } else {
          check.pop();
        }
      } else if(ch == '[') {
        check.push('[');
      } else if(ch == ']') {
        if(check.empty() || check.top() != '[') {
          flag=false;
          break;
        } else {
          check.pop();
        }
      }

    }
    if(flag==true && check.empty()) {
      cout << "yes" << "\n";
    } else {
      cout << "no" << "\n";
    }
  }
  return 0;
}