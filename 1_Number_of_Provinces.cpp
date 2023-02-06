/*LEETCODE 547*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void DFS(int node,vector<int> adj[],vector<int> &visited)
    {
        visited[node]=1;
        for(auto x:adj[node])
        {
            if(visited[x]==0)
            DFS(x,adj,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        vector<int> visited(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]!=1)
            {
                ans++;
                DFS(i,adj,visited);
            }
        }
        return ans;
    }
};

int main()
{

}