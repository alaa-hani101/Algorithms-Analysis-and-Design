#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits>
#include <stack>
#include <algorithm>

using namespace std;

const double INF = numeric_limits<double>::infinity();


string find_lowest_cost_node(const unordered_map<string, double>& costs, const vector<string>& processed) {
    double lowest_cost = INF;
    string lowest_cost_node = "";

    for (const auto& node : costs) {
        double cost = node.second;
        if (cost < lowest_cost && find(processed.begin(), processed.end(), node.first) == processed.end()) {
            lowest_cost = cost;
            lowest_cost_node = node.first;
        }
    }

    return lowest_cost_node;
}


void dijkstra(unordered_map<string, unordered_map<string, int>>& graph, const string& start) {

    unordered_map<string, double> costs;
    for (const auto& node : graph) {
        if (node.first == start) {
            costs[node.first] = 0;
        }
        else {
            costs[node.first] = INF;
        }
    }


    unordered_map<string, string> parents;


    vector<string> processed;


    string node = find_lowest_cost_node(costs, processed);

    while (!node.empty()) {
        double cost = costs[node];
        const auto& neighbors = graph[node];

        for (const auto& neighbor : neighbors) {
            string n = neighbor.first;
            double new_cost = cost + neighbor.second;
            if (new_cost < costs[n]) {
                costs[n] = new_cost;
                parents[n] = node;
            }
        }

        processed.push_back(node);
        node = find_lowest_cost_node(costs, processed);
    }


    string finish = "fin";
    if (costs[finish] == INF) {
        cout << "No path from " << start << " to " << finish << "." << endl;
    }
    else {
        stack<string> path;
        string current = finish;
        while (current != start) {
            path.push(current);
            current = parents[current];
        }
        path.push(start);

        cout << "Shortest path from " << start << " to " << finish << ": ";
        while (!path.empty()) {
            cout << path.top();
            path.pop();
            if (!path.empty()) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
}


int main() {
    
    unordered_map<string, unordered_map<string, int>> graph;


    graph["start"] = { {"a", 6}, {"b", 2} };
    graph["a"] = { {"fin", 1} };
    graph["b"] = { {"a", 3}, {"fin", 5} };
    graph["fin"] = {};


    dijkstra(graph, "start");

    return 0;
}
