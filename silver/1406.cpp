#include <iostream>
#include <list>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	list<char> str;
	string init;
	cin >> init;
	for (char c : init) {
		str.push_back(c);
	}
	int num;
	cin >> num;
	list<char>::iterator cursor = str.end();
	while(num--) {
		char op;
		cin >> op;
		if(op == 'L') {
			if(cursor != str.begin()) cursor--;
		} else if(op == 'D') {
			if(cursor != str.end()) cursor++;
		} else if(op == 'B') {
			if(cursor != str.begin()) {
				cursor--;
				cursor = str.erase(cursor);
			}
		} else if(op == 'P') {
			char add;
			cin >> add;
			str.insert(cursor, add);
		}
	}
	for(const auto c: str) cout << c;
	
	return 0;
}