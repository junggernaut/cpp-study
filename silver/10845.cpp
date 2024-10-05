#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n;
  deque<int> deque;
  cin >> n;

  for(int i=0; i<n; ++i) {
    string command;
    cin >> command;
    if(command == "push") {
      int num;
      cin >> num;
      deque.push_back(num);

    } else if(command == "pop") {
      if(deque.empty()) {
        cout << -1 << "\n";
      } else {
        cout << deque.front() << "\n";
        deque.pop_front();
      }      
    } else if(command == "size") {
      cout << deque.size() << "\n";
    } else if(command == "empty") {
      if(deque.empty()) {
        cout << 1 << "\n";
      } else {
        cout << 0 << "\n";
      }     
    } else if(command == "front") {
      if(deque.empty()) {
        cout << -1 << "\n";
      } else {
        cout << deque.front() << "\n";
      }  
    } else if(command == "back") {
      if(deque.empty()) {
        cout << -1 << "\n";
      } else {
        cout << deque.back() << "\n";
      } 
    }
  }

  return 0;

}