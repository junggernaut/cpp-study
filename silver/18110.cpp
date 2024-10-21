#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	if(n==0){
		cout << 0;
		return 0;
	}
	int* scores = new int[n];
	int cut = static_cast<int>(round(n * 0.15));
	for(int i=0; i<n; ++i) {
		cin >> scores[i];
	}
	sort(scores, scores+n);
	double sum=0;
	for(int i=cut; i<n-cut; ++i) {
		sum += scores[i];
	}
	cout << static_cast<int>(round(sum/(n-cut*2)));
	
	delete[] scores;
	return 0;
}
