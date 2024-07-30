#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int start, int mid, int end) {

	int  left_length = mid - start + 1;
	int  right_length = end - mid;

	vector<int> left_arr(left_length);
	vector<int> right_arr(right_length);

	for (int i = 0; i < left_length; i++) {
		left_arr[i] = arr[start + i];
	}
	for (int i = 0; i < right_length; i++) {
		right_arr[i] = arr[mid + 1 + i];
	}

	int i = 0, j = 0, k = start;         // iterate for left , for right , for original array
	while (i < left_length && left_arr[i] < 0) {
			arr[k] = left_arr[i];
			i++;
			k++;
		
	}

	while (j < right_length && right_arr[j] < 0) {
		arr[k] = right_arr[j];
		j++;
		k++;
	}

	while (i < left_length) {
		arr[k] = left_arr[i];
		i++;
		k++;
	}

	while (j < right_length) {
		arr[k] = right_arr[j];
		j++;
		k++;
	}

}
void sgregate(vector<int> & arr, int start, int end) {
	if (end <= start) {
		return;
	}
	int mid = start + (end - start) / 2;
	sgregate(arr, start, mid);
	sgregate(arr, mid + 1, end);
	merge(arr, start, mid, end);
}
int main()
{
	vector<int>arr = { 6,-1,-5,12,8,-1};
	for (auto a : arr) {
		cout << " " << a;
	}
	cout << endl;

	sgregate(arr, 0, arr.size() - 1);

	for (auto a : arr) {
		cout << " " << a;
	}



	return 0;
}