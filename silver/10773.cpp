#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);
	
	stack<int> boss;
	int n;
	cin >> n;
	for (int i=0; i<n; ++i) {
		int input;
		cin >> input;
		if(input == 0) {
			boss.pop();
		} else {
			boss.push(input);
		}
	}
	int result = 0;
	while(!boss.empty()){	
		result += boss.top();
		boss.pop();
	}
	cout << result;
	return 0;
	
}