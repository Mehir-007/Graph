/* LeetCode 200*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void DFS(int i,int j,vector<vector<char>>& grid,vector<vector<int>> &visited)
    {
        int n=grid.size();
        int m=grid[0].size();
       
        if(i>=0 && i<n && j>=0 && j<m && visited[i][j]==0 && grid[i][j]=='1')
        {
            visited[i][j]=1;
            DFS(i+1,j,grid,visited);
            DFS(i-1,j,grid,visited);
            DFS(i,j+1,grid,visited);
            DFS(i,j-1,grid,visited);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && visited[i][j]==0)
                {
                    ans++;
                    DFS(i,j,grid,visited);
                }
            }
        }
        return ans;
    }
};

int main()
{

}