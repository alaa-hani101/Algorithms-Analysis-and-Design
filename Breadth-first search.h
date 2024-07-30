#pragma once

void print_seller(std::string& person);

void fill_search_queue(std::unordered_map<std::string, std::vector<std::string>>& graph, std::string& person, std::queue<std::string>& search_queue);

void add_searched_person(std::string& person);
