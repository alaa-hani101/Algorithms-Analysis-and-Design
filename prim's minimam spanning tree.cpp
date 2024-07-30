#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool valid_edge(bool  selected[6], int j, double  graph[6][6], int i, double minimum_edge)
{
    return selected[j] == false && graph[i][j] > 0 && graph[i][j] < minimum_edge;
}
void Update_selected_verticies(double& minimum_edge, double  graph[6][6], int i, int j, int& temp_from, int& temp_to)
{
    minimum_edge = graph[i][j];
    temp_from = i;
    temp_to = j;
}
int main()
{
    char labels[] = { '1', '2', '3', '4', '5', '6' };
    double graph[6][6] = {
        {0, 6.7, 5.2, 2.8, 5.6, 3.6}, {6.7, 0, 5.7, 7.3, 5.1, 3.2},
        {5.2, 5.7, 0, 3.4, 8.5, 4.0}, {2.8, 7.3, 3.4, 0, 8, 4.4},
        {5.6, 5.1, 8.5, 8, 0, 4.6},   {3.6, 3.2, 4, 4.4, 4.6, 0} };

    int vecrticies_size = 6;

    int selected_edges_count = 0;

    bool selected[6] = { false };

    selected[0] = true;

    while (selected_edges_count < vecrticies_size - 1) {

        double minimum_edge = INT_MAX;
        int temp_from = -1;
        int temp_to = -1;

        for (int i = 0; i < vecrticies_size; i++) {

            if (selected[i] == true) {

                for (int j = 0; j < vecrticies_size; j++) {

                    if (valid_edge(selected, j, graph, i, minimum_edge)) {

                        Update_selected_verticies(minimum_edge, graph, i, j, temp_from, temp_to);
                    }

                }
            }
        }
        selected[temp_to] = true;

        selected_edges_count++;

        cout << labels[temp_from] << " - " << labels[temp_to] << " : "
            << graph[temp_from][temp_to] << endl;
    }

	return 0;
}