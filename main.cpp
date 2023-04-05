#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    // adding elements in a graph
    void addEdges(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
            adj[v].push_back(u);
    }

    // function to print adjacency list of a element

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
          cout<<endl;
        }
        
    }
};

int main()
{
    int n, m;
    cout << "Enter Number of Nodes : ";
    cin >> n;
    cout << "Enter Number of Edges : ";
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, 0);
        
    }
  g.printAdjList();
}
// input
// 5
// 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4
