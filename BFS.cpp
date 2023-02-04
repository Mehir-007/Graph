/*
Initial Configuration:

Queue data structure: follows FIFO, and will always contain the starting.
Visited array: an array initialized to 0

1.In BFS, we start with a “starting” node, mark it as visited, and push it into the queue data structure.

2.In every iteration, we pop out the node ‘v’ and put it in the solution vector, as we are traversing this node.

3.All the unvisited adjacent nodes from ‘v’ are visited next and are pushed into the queue. 
The list of adjacent neighbors of the node can be accessed from the adjacency list.

4.Repeat steps 2 and 3 until the queue becomes empty, and this way you can easily traverse all the nodes in the graph.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
vector<int> BFS(vector<int> adj[],int V)
{
    vector<int> ans;
    vector<int> visited(V+1,0);
    queue<int> q;
    q.push(0);
    visited[0]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto it:adj[x])
        {
            if(visited[it]==0)
            {
                visited[it]=1;
                q.push(it);
            }
        }
    }
    return ans;
}
};
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
    vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;
    vector <int> ans = obj.BFS(adj,5);
    printAns(ans);

    return 0;
}