#include<iostream>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<vector>

using namespace std;


class Graph {
public:
    unordered_map<int, bool> visited_nodes;
    unordered_map<int, list<int> > Adjacency_list;

    void addEdge(int vertics_number, int weight);

    void DFS(int vertics_number);
};

void Graph::addEdge(int vertics_number, int weight)
{
    Adjacency_list[vertics_number].push_back(weight);
}

void Graph::DFS(int vertics_number)
{
    visited_nodes[vertics_number] = true;
    cout << vertics_number << " ";

    list<int>::iterator i;
    for (i = Adjacency_list[vertics_number].begin(); i != Adjacency_list[vertics_number].end(); ++i)
        if (!visited_nodes[*i])
            DFS(*i);
}

int main()
{

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
        " (starting from vertex 2) \n";

    // Function call
    g.DFS(2);

    return 0;
}