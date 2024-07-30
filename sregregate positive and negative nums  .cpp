#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void sgregate(vector<int> & arr) {
	
	vector<int>postive;
	vector<int>negative;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < 0)
			negative.push_back(arr[i]);
		else if (arr[i] > 0)
			postive.push_back(arr[i]);
	}
	int k = 0;
	for (int i = 0; i < negative.size() ; i++) {
		arr[k++] = negative[i];
	}
	for (int i =0 ; i < postive.size() ; i++) {
		arr[k++] = postive[i];
	}
}
int main()
{
	vector<int>arr = { 6,-1,-5,12,8,-1};
	for (auto a : arr) {
		cout << " " << a;
	}
	cout << endl;

	sgregate(arr);

	for (auto a : arr) {
		cout << " " << a;
	}



	return 0;
}