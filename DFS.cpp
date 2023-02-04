/*
DFS is a traversal technique which involves the idea of recursion and backtracking. DFS goes in-depth, i.e., 
traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, 
then it backtracks on the same path and traverses other unvisited nodes. 

1.In DFS, we start with a node ‘v’, mark it as visited and store it in the solution vector. It is unexplored as its adjacent nodes are not visited.

2.We run through all the adjacent nodes, and call the recursive dfs function to explore the node ‘v’ which has not been visited previously. 
This leads to the exploration of another node ‘u’ which is its adjacent node and is not visited. 

3.The adjacency list stores the list of neighbours for any node. 
Pick the neighbour list of node ‘v’ and run a for loop on the list of neighbours (say nodes ‘u’ and ‘w’ are in the list). 
We go in-depth with each node. When node ‘u’ is explored completely then it backtracks and explores node ‘w’.

4.This traversal terminates when all the nodes are completely explored. 
In this way, all the nodes are traversed in a depthwise manner.
*/

#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[],vector<int>& visited,vector<int>& ans,int node)
{
    visited[node]=1;
    ans.push_back(node);
    for(auto it:adj[node])
    {
        if(visited[it]==0)
        {
            DFS(adj,visited,ans,it);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V+1,0); 
        int node = 0;
        // create a list to store dfs
        vector<int> ans; 
        // call dfs for starting node
        DFS(adj, visited, ans,node); 
        return ans; 
}
void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[5];
    
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    vector <int> ans =dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}