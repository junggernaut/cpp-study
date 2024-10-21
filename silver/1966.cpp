#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num_test;
	cin >> num_test;
	for(int i=0; i<num_test; ++i) {
		int num_job, my_job;
		cin >> num_job >> my_job;
		queue<pair<int, int>> jobs;
		vector<int> priorities;
		for(int j=0; j<num_job; ++j) {
			int priority;
			cin >> priority;
			pair<int, int> job(j, priority);
			jobs.push(job);
			priorities.push_back(priority);
		}
		sort(priorities.begin(), priorities.end(), less<int>());
		
		int print_order = 0;
		while(!priorities.empty()){
			int check_priority = priorities.back();
			auto current = jobs.front();
			jobs.pop();
			if(check_priority > current.second) {
				jobs.push(current);
			} else {
				++print_order;
				if(current.first == my_job) {
					cout << print_order << "\n";	
					break;
				}
				priorities.pop_back();
			}
		}
		
	}
}
