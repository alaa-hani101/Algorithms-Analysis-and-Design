#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
vector<int> selector(vector<int> start, vector<int>end) {
	int i = 1, j = 0;
	vector<int>res;
	res.push_back(0);
	for (int i = 0; i < start.size(); i++) {
		if (start[i] >= end[j]) {
			res.push_back(i);
			j = i;
		}
	}
	return res;
}

int main()
{

	vector<int> start = { 9,10,11,12,13,14 };
	vector<int> end = { 11,11,12,14,15,16 };

	vector<int> res= selector(start, end);

	for (auto a : res) {
		cout << a << " ";
	}


	return 0;
}