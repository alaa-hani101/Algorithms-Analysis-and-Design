#include<iostream>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;

vector<string>searched_persons;

bool person_is_seller(string name) {
    return name[name.size() - 1] == 'm';
}

bool search_in_searched_person_queue(string person) {
    return find(searched_persons.begin(), searched_persons.end(), person) != searched_persons.end();
}

void print_seller(std::string& person)
{
    cout << person << " is a seller!" << endl;
}

void fill_search_queue(std::unordered_map<std::string, std::vector<std::string>>& graph, std::string& person, std::queue<std::string>& search_queue)
{
    for (auto& name : graph[person]) {
        search_queue.push(name);
    }
}

void add_searched_person(std::string& person)
{
    searched_persons.push_back(person);
}
void search(string person) {
    unordered_map<string, vector<string>> graph;

    graph["you"] = { "alice", "bob", "claire" };
    graph["bob"] = { "anuj", "peggy" };
    graph["alice"] = { "peggy" };
    graph["claire"] = { "thom", "jonny" };
    graph["anuj"] = {};
    graph["peggy"] = {};
    graph["thom"] = {};
    graph["jonny"] = {};

    queue<string>search_queue;

    fill_search_queue(graph, person, search_queue);
    
    while (!search_queue.empty()) {
        person = search_queue.front();
        search_queue.pop();
        if (!search_in_searched_person_queue(person)) {
            if (person_is_seller(person)){
                 print_seller(person);
                 return;
            }else{
               fill_search_queue(graph, person, search_queue);
               add_searched_person(person);
            }
        }

    }
    cout << "No seller found\n";
}

int main()
{
    search("you");

    
    
	return 0;
}