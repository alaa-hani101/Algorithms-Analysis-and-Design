# [Algorithms-Analysis-and-Design]: A Collection of Algorithm Implementations

This repository provides implementations of various algorithms in C++. It aims to offer a clear understanding of each algorithm with real-world applications and code examples.

## Table of Contents

* Algorithm Analysis
* Insertion Sort
* Recursion
* Merge Sort
* Binary Search
* Segregating Positive and Negative Numbers
* Greedy Algorithm
* Huffman Coding
* Dynamic Programming
* LCS Algorithm (Longest Common Subsequence)
* Knapsack Problem
* Prim's Minimum Spanning Tree
* Depth-First Search (DFS)
* Breadth-First Search (BFS)
* Dijkstra's Algorithm

## Algorithm Analysis

This section provides a brief overview of algorithm analysis, including concepts like time complexity and space complexity. Consider adding links to resources explaining these concepts in detail.

## Algorithm Summaries

Each section below details a specific algorithm, including its purpose, complexity analysis, applications, code examples (linked to the corresponding files in the repository), and (optional) additional resources.

### Insertion Sort

* **Description:** Iteratively inserts elements into their correct positions in a partially sorted sub-list.
* **Time Complexity:** O(n^2) average and worst case, O(n) best case (already sorted).
* **Space Complexity:** O(1) (in-place sorting).
* **Applications:** Small datasets, online algorithms, partially sorted data.
* **Code Example:** [Link to file containing Insertion Sort implementation](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/insertion_sort.cpp)
* **Additional Resources:** [Link to Insertion Sort tutorial]


### Merge Sort

* **Description:** Divides the input array into two halves, recursively sorts them, and merges the sorted halves.
* **Time Complexity:** O(n log n) in all cases.
* **Space Complexity:** O(n) for auxiliary space.
* **Applications:** Sorting large datasets, external sorting.
* **Code Example:** [Link to file containing Merge Sort implementation](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Merge_sort.cpp)
* **Additional Resources:** [Link to Merge Sort tutorial]

### Binary Search

* **Description:** Searches for a target value in a sorted array by repeatedly dividing the search interval in half.
* **Time Complexity:** O(log n).
* **Space Complexity:** O(1).
* **Applications:** Searching in sorted arrays, finding lower/upper bounds.
* **Code Example:** [Link to file containing Binary Search implementation](Algorithms-Analysis-and-Design/blob/main/Binary%20Search.cpp)
* **Additional Resources:** [Link to Binary Search tutorial]

### Segregating Positive and Negative Numbers

* **Description:** Rearranges an array so that all negative numbers appear before all positive numbers.
* **Time Complexity:** O(n).
* **Space Complexity:** O(1) (in-place).
* **Applications:** Data preprocessing, sorting-related algorithms.
* **Code Example:** [Link to file containing Segregation implementation](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/sregregate%20positive%20and%20negative%20nums%20%20.cpp)
* **Additional Resources:** [Link to Segregation tutorial]

### "Greedy Algorithms"

### Activity Selection Problem

* **Description:**
Given a set of activities with their start and finish times, select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.   
A greedy approach can be used to solve this problem efficiently. 

**Steps:**

1. **Sort** the activities in increasing order of their finish times.
2. **Select** the first activity from the sorted array.
3. **Iterate** through the remaining activities.
   * If the start time of the current activity is greater than or equal to the finish time of the previously selected activity, select the current activity.   


**Time Complexity:** O(n log n) for sorting, O(n) for selecting activities.
**Space Complexity:** O(1)
* **Applications:** Vehicle Routing ,Operating System Process Scheduling.
* **Code Example:** [Link to file implementing Huffman Coding](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Activity%20Selection%20prob(Greedy).cpp)

### Huffman Coding

* **Description:** Creates a prefix-free code for characters based on their frequency.
* **Time Complexity:** O(n log n) for building the Huffman tree.
* **Space Complexity:** O(n) for the Huffman tree.
* **Applications:** Data compression.
* **Code Example:** [Link to file implementing Huffman Coding](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/HUffmanMain.cpp)

### Fractiona Knapsack Problem

* **Description:** Finds the maximum value that can be put in a knapsack of given weight capacity by selecting items from a given set of items, each with its own weight and value.
* **Time Complexity:** O(nW) where n is the number of items and W is the knapsack capacity.
* **Space Complexity:** O(nW) for the dynamic programming table.
* **Applications:** Resource allocation, optimization problems.
* **Code Example:** [Link to file implementing Knapsack problem](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Knapsack.cpp)



### "Dynamic Programming"


### LCS Algorithm (Longest Common Subsequence)

* **Description:** Finds the longest common subsequence between two sequences.
* **Time Complexity:** O(mn) where m and n are the lengths of the sequences.
* **Space Complexity:** O(mn) for the dynamic programming table.
* **Applications:** Bioinformatics, text editing.
* **Code Example:** [Link to file implementing LCS algorithm](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Longest%20Common%20Subsequence.cpp)


### Stagecoach Problem 

* **Description:**
Given a set of jobs with their profit and deadline, find the maximum profit that can be obtained by scheduling jobs within their deadlines. Only one job can be done at a time.
**Steps:**

1. **Sort** the jobs in decreasing order of their profit.
2. **Create** an array to store the jobs that can be scheduled.
3. **Iterate** through the sorted jobs:
   * If the current job can be scheduled without violating deadlines, schedule it.
   * If the current job cannot be scheduled, find the latest job with a deadline earlier than the current job's deadline and replace it if the current job's profit is higher.
* **Time Complexity:** O(n^2) in the worst case due to nested loops.
* **Space Complexity:** O(n) for the slots array.
* **Code Example:** [Link to file implementing Prim's algorithm](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/stagecoach%20problem.cpp)

### Knapsack Problem (0/1 Knapsack)

* **Description:**
Given a set of items, each with a weight and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible.   
A dynamic programming approach can be used to solve this problem efficiently.

* **Time Complexity:** O(nW) where n is the number of items and W is the knapsack capacity.
* **Space Complexity:** O(nW) for the dynamic programming table.
* **Applications:** Portfolio Management, Resource Allocation.
* **Code Example:** [Link to file implementing Prim's algorithm](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/kanpsack%200-1.cpp)


### "Dynamic Programming"


### Prim's Minimum Spanning Tree

* **Description:** Finds a minimum spanning tree for a weighted undirected graph.
* **Time Complexity:** O(E log V) or O(E + V log V) depending on the implementation.
* **Space Complexity:** O(E + V).
* **Applications:** Network design, clustering.
* **Code Example:** [Link to file implementing Prim's algorithm](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/prim's%20minimam%20spanning%20tree.cpp)


### Depth-First Search (DFS)

* **Description:** Traverses a graph by exploring as far as possible along a branch before backtracking.
* **Time Complexity:** O(V + E) where V is the number of vertices and E is the number of edges.
* **Space Complexity:** O(V) for the recursion stack.
* **Applications:** Topological sorting, cycle detection, finding connected components.
* **Code Example:** [Link to file implementing DFS](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Deapth%20First%20Search.cpp)


### Breadth-First Search (BFS)

* **Description:** Traverses a graph by exploring neighbor nodes first before moving to the next level.
* **Time Complexity:** O(V + E) where V is the number of vertices and E is the number of edges.
* **Space Complexity:** O(V) for the queue.
* **Applications:** Shortest path in unweighted graphs, finding connected components.
* **Code Example:** [Link to file implementing BFS](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Breadth-first%20search.cpp)


### Dijkstra's Algorithm

* **Description:** Finds the shortest path between a single source node and all other nodes in a weighted graph.
* **Time Complexity:** O(V^2) using adjacency matrix, O((V + E) log V) using min-heap.
* **Space Complexity:** O(V) for the distance array.
* **Applications:** Routing protocols, network optimization.
* **Code Example:** [Link to file implementing Dijkstra's algorithm](https://github.com/alaa-hani101/Algorithms-Analysis-and-Design/blob/main/Dijkestra%20Algorithm.cpp)


## Running the Code

* (If applicable) Provide instructions on setting up the development environment (e.g., compiler, libraries).
* Explain how to compile and run the code examples.
* Include sample input/output examples to illustrate functionality.

## Contributing (Optional)

* (If you welcome contributions) Outline the process for adding new algorithms or improvements.
* Mention any formatting guidelines or coding standards to be followed.


**Note:**




This README provides a comprehensive overview of various algorithms and their implementations.
