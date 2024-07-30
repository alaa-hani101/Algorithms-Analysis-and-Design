//#include <iostream>
//#include <limits>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//class Edge;
//
//class Vertex {
//public:
//    string Name;
//    double TotalLength;
//    Vertex *SourceOfTotalLength;
//    vector<Edge> VertexLinks;
//
//    Vertex() {}
//
//    Vertex(string name) {
//        Name = name;
//        TotalLength = numeric_limits<double>::infinity();
//        SourceOfTotalLength = nullptr;
//    }
//};
//
//class Edge {
//public:
//    double Weight;
//    Vertex Source;
//    Vertex Target;
//
//    Edge(Vertex source, Vertex target, double weight = 0) {
//        source = Source;
//        target = Target;
//        weight = Weight;
//    }
//
//
//};
//
//class graph {
//public:
//    int last_index = 0;
//    vector<Vertex> vertices;
//
//    graph(vector<string> names) {
//        for (const auto& name : names) {
//            Vertex *vertex = new Vertex();
//            vertex->Name = name;
//            vertices.push_back(*vertex);
//            last_index++;
//        }
//    }
//
//    void AddEdges(int vertexIndex, int targets[], double weights[], int length) {
//        this->vertices[vertexIndex]->VertexLinks.resize(length);
//        for (int i = 0; i < length; i++) {
//            this->vertices[vertexIndex]->VertexLinks[i] = new Edge(
//                this->vertices[vertexIndex], this->vertices[targets[i]], weights[i]);
//        }
//    }
//
//};
