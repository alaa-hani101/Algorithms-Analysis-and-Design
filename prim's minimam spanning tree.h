#pragma once

bool valid_edge(bool  selected[6], int j, double  graph[6][6], int i, double minimum_edge);

void Update_selected_verticies(double& minimum_edge, double  graph[6][6], int i, int j, int& temp_from, int& temp_to);
