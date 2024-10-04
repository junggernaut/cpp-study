#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;

struct str_compare {
  bool operator()(const string &a, const string &b) const {
    if (a.length() == b.length()) {
      return a < b;
    } else {
      return a.length() < b.length();
    }
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  set<string, str_compare> str_set;
  for (int i = 0; i < n; ++i) {
    string str;
    cin >> str;
    str_set.insert(str);
  }

  for (const auto &str : str_set) {
    cout << str << "\n";
  }

  return 0;
}

/*
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

struct str_compare {
  bool operator()(const string& a, const string& b) const {
    if(a.length() == b.length()) {
      return a<b;
    }
    else {
      return a.length()<b.length();
    }
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  string* words = new string[n];
  for(int i=0; i<n; ++i) {
    cin >> words[i];
  }

  sort(words, words+n, str_compare());

  for(int i=0; i<n; ++i) {
    if (i>0 && words[i] == words[i - 1]) {
          continue;
    }

    cout << words[i] << "\n";
  }

  return 0;
}

*/