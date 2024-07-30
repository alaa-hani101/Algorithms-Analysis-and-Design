#include <iostream>
#include <climits>
#include <vector>
#include <string>

using namespace std;

const int MAX = 10;
// Define the labels and data for the graph
vector<string> labels = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
vector<vector<int>> _data = {
    {0, 2, 4, 3, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 7, 4, 6, 0, 0, 0},
    {0, 0, 0, 0, 3, 2, 4, 0, 0, 0},
    {0, 0, 0, 0, 4, 1, 5, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 4, 0},
    {0, 0, 0, 0, 0, 0, 0, 6, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 3, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};



struct state {
    string from, to;
    int cost;
};



int main() {
    int n = _data.size();

    vector<state> states(n);

    states[n - 1] = { "", "", 0 };


    for (int i = n - 2; i >= 0; i--) {

        states[i] = { labels[i], "", INT_MAX };

        for (int j = i + 1; j < n; j++) {

            if (_data[i][j] == 0) continue;

            int newCost = _data[i][j] + states[j].cost;

            if (newCost < states[i].cost) {
                states[i].to = labels[j];
                states[i].cost = newCost;
            }
        }
    }

    vector<string> path(1, "A");
    int i = 0, j = 0;
    while (i < states.size()) {
        if (states[i].from == path[j]) {
            path.push_back(states[i].to);
            j++;
        }
        i++;
    }

    cout << "Minimum Cost: " << states[0].cost << endl;
    cout << "Minimum path: ";
    for (string node : path) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}