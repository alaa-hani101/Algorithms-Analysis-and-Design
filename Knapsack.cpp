#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct item {
	double profit;
	int weight;
	item(double profit, int weight) {
		this->profit = profit;
		this->weight = weight;
	}
};
bool compare(item a, item b) {
	double r1 = a.profit / a.weight;
	double r2 = b.profit / b.weight;
	return r1 > r2;
}
double knapsack(int maxWeight,vector<item>& items) {

	// sort items by ratio
	sort(items.begin(), items.end(), compare);

	double maxProfit = 0;

	for (const item& a : items) {
		if (maxWeight == 0)
			break;
		if (a.weight < maxWeight)
		{
			maxWeight -= a.weight;
			maxProfit += a.profit;
		}
		else
		{
			maxProfit += a.profit * ( (double) maxWeight/ a.weight);
			maxWeight = 0;
		}
	}
	return maxProfit;
}

int main()
{
	int w = 50;
	
	vector<item>items = { {60, 10}, {100, 20}, {120, 30} };

	double maxprofit = knapsack(w, items);

	cout << "max profit  " << maxprofit;

	return 0;
}