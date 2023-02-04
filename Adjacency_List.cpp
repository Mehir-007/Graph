/*
This is a node-based representation. In this representation, we associate with each node a list of nodes adjacent to it. 
Normally an array is used to store the nodes. 
The array provides random access to the adjacency list for any particular node.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    // Space complexity = O(2xE)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}

/*
For directed graphs, if there is an edge between u and v it means the edge only goes from u to v, 
i.e., v is the neighbor of u, but vice versa is not true. 
The space needed to represent a directed graph using its adjacency list is E locations, 
where E denotes the number of edges, as here each edge data appears only once.
*/