#include <iostream>
#include <algorithm>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int k, n;
	cin >> k >> n;
	int* lans = new int[n];
	int sum = 0;
	for(int i=0; i<k; ++i){
		cin >> lans[i];
		sum += lans[i];
	}
	sort(lans, lans+k, less<int>());
	int unit_right = lans[k-1];
	int ans;
	
	int num_right=0;
	for(int i=0; i<k; i++) {
		num_right += lans[i]/unit_right; 
	}
	if(num_right >= n) {
		cout << unit_right;
	} else {
		int unit_left = 1; 
		while(unit_left+1 < unit_right) {
			int unit = (unit_right - unit_left)/2 + unit_left; 
			int total_num=0;
			for(int i=0; i<k; i++) {
				total_num += lans[i]/unit; 
			}
			if(total_num >= n) {
				unit_left = unit;
			} else{
				unit_right = unit;
			}
		}
		cout << unit_left;
	}
	
	delete[] lans;
	return 0;
}

//https://www.acmicpc.net/blog/view/109