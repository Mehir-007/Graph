/*
Weighted Graph Representation

As of now, we were considering graphs with unit weight edges 
(i.e., if there is an edge between two nodes then the weight on the edge is unit weight )

For the adjacency matrix, it is much simpler.

int u,v,wt;
cin>>u>>v>>wt;
adj[u][v]=wt;
adj[v][u]=wt;

But how are we going to implement it in the adjacency list?

Earlier in the adjacency list, we were storing a list of integers in each index, but for weighted graphs, we will store pairs (node, edge weight) in it.

vector< pair <int,int> > adjList[n+1];


*/