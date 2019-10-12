#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
    private:
        map<T,list<T>> adjList; // this is the graph
    public: 
        void addEdge(T u,T v,bool isBi = true)
        {
            adjList[u].push_back(v);
            if(isBi)
                adjList[v].push_back(u);
        }
        void bfs(T src)
        {
            map<T,bool> visited;
            queue<T> q;
            visited[src] = true;
            q.push(src);
            while(!q.empty())
            {
                T node = q.front();
                q.pop();
                cout << node << " ";
                // which all neighbours of the current node have been visited is checked with this loop
                for(auto i:adjList[node])
                {
                    if(!visited[i])
                    {
                        visited[i] = true;
                        q.push(i);
                    }
                }
            }
        }
};
int main()
{
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);
    g.bfs(0);
    return 0;
}
