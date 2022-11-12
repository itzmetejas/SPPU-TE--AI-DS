/* 
Group B :1 - Implement Breadth First Search algorithm. 
Use an undirected graph and develop a recursive algorithm for searching all the vertices of a graph or tree data structure.
*/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of vertices: ";
    cin>>n;

    int a[n][n];
    cout<<"Enter the adjacency matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int visited[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }

    queue<int> q;
    int start;
    cout<<"Enter Starting Vertex: ";
    cin>>start;
    q.push(start);
    visited[start]=1;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<n;i++)
        {
            if(a[u][i]==1 && visited[i]==0)
            {
                q.push(i);
                visited[i]==1;
            }
        }
    }
}

//Code by Tejas Shirsath
