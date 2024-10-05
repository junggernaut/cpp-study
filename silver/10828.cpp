#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n;
  stack<int> stack;
  cin >> n;

  for(int i=0; i<n; ++i) {
    string command;
    cin >> command;
    if(command == "push") {
      int num;
      cin >> num;
      stack.push(num);
      
    } else if(command == "pop") {
      if(stack.empty()) {
        cout << -1 << "\n";
      } else {
        cout << stack.top() << "\n";
        stack.pop();
      }      
    } else if(command == "size") {
      cout << stack.size() << "\n";
    } else if(command == "empty") {
      if(stack.empty()) {
        cout << 1 << "\n";
      } else {
        cout << 0 << "\n";
      }     
    } else if(command == "top") {
      if(stack.empty()) {
        cout << -1 << "\n";
      } else {
        cout << stack.top() << "\n";
      }  
    }
  }

  return 0;
  
}