#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int binary_search(vector<int> arr, int key) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
	/*	if (key == arr[mid])
			return mid;
		else if (key < arr[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;*/
}
int main()
{
	vector<int> arr = { 1,2,3,5,6,15,26 };
	cout<< binary_search(arr , 26);

	
	return 0;
}