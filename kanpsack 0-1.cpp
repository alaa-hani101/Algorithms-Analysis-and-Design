#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
struct item {
	string name;
	int weight;
	int profit;

};

void print_solution(vector<string> solution) {
	cout << "Solution: ";
	for (int i = 0; i < solution.size(); i++) {
		cout << solution[i] << " ";
	}
	cout << endl;
}

int knapsack(vector<item> items, vector<vector<int>>dp_table, vector<string> solution, int max_weight) {

	items.insert(items.begin(), { "#0", 0, 0 });

	size_t size = items.size();

	dp_table.resize(size, vector<int>(max_weight + 1, 0));

	for (int i = 1; i < size; i++) {
		for (int j = 1; j <= max_weight; j++) {
			if (items[i].weight <= j) {
				dp_table[i][j] =
					max(dp_table[i - 1][j], items[i].profit + dp_table[i - 1][j - items[i].weight]);
			}
			else {
				dp_table[i][j] = dp_table[i - 1][j];
			}
		}
	}


	int i = size - 1, j = max_weight, remain = max_weight;
	while (remain >= 0 && j > 0) {
		if (dp_table[i][j] > dp_table[i - 1][j]) {
			solution.push_back(items[i].name);
			remain -= items[i].weight;
			j = remain;
			i--;
		}
		else {
			i--;
		}
	}

	print_solution(solution);
	

	return dp_table[size - 1][max_weight];
}


int main()
{
	vector<item> items = {
	  {"#1", 1, 4}, {"#2", 3, 9}, {"#3", 5, 12}, {"#4", 4, 11} };
	int max_weight = 8;


	vector<vector<int>> dp;
	vector<string> solution;


	int max_profit = knapsack(items, dp, solution, max_weight);


	cout << "Max Profit: " << max_profit << endl;
	
	

	return 0;
}