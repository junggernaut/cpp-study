#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);
	
	int n;
	cin >> n;
	int* nums = new int[n];
	unordered_map<int, int> counts;
	for(int i=0; i<n; ++i) {
		int num;
		cin >> num;
		nums[i] = num;
		++counts[num];
	}
	sort(nums, nums+n, greater<int>());
	int sum = 0;
	for(int i=0; i<n; ++i) {
		sum += nums[i];
	}
	
	vector<int> max_freqs;
	int max_freq = 0;
	for(const auto& count : counts) {
		if(count.second > max_freq) {
			max_freqs = {count.first};
			max_freq = count.second;
		} else if(count.second == max_freq) {
			max_freqs.push_back(count.first);
		}
	}
	int freq;
	if(max_freqs.size() == 1){
		freq = max_freqs.back();
	} else {
		sort(max_freqs.begin(), max_freqs.end(), greater<int>());
		freq = max_freqs[1];
	}
	cout << sum/static_cast<double>(n);
	cout << (round(sum/static_cast<double>(n)) == 0 ? 0 : round(sum/static_cast<double>(n))) << "\n";
	cout << nums[n/2] << "\n";
	cout << freq << "\n";
	cout << (nums[0]-nums[n-1]) << "\n";
	delete[] nums;
	return 0;
}