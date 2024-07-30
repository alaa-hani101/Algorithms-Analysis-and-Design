#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;
void insertion_sort(vector<int>& arr){
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j=i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
	}
}
int main()
{
	
    vector<int> arr = { 9,5,1,4,3 };

    insertion_sort(arr);

    std::cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
	return 0;
}