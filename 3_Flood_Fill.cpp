/*LeetCode - 733*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void DFS(int i,int j,vector<vector<int>>& image,vector<vector<int>> &visited,int old_color,int new_color)
    {
        int n=image.size();
        int m=image[0].size();
       
        if(i>=0 && i<n && j>=0 && j<m && visited[i][j]==0 && image[i][j]==old_color)
        {
             visited[i][j]=1;
                image[i][j]=new_color;
             DFS(i+1,j,image,visited,old_color,new_color);
              DFS(i-1,j,image,visited,old_color,new_color);
               DFS(i,j+1,image,visited,old_color,new_color);
                DFS(i,j-1,image,visited,old_color,new_color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int old_color=image[sr][sc];
        DFS(sr,sc,image,visited,old_color,color);

    return image;
    }
};

int main()
{

}