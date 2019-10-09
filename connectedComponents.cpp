#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
    private:
        map<T,list<T>> adjList;
    public:
        void addEdge(T u,T v, bool isBi = true)
        {
            adjList[u].push_back(v);
            if(isBi)
                adjList[v].push_back(u);
        }
        void dfs(T node, map<T,bool> &visited)
        {
            cout << node << " ";
            visited[node] = true;
            for(auto neighbour:adjList[node])
            {
                if(!visited[neighbour])
                    dfs(neighbour,visited);
            }
        }
        void connectedComponents()
        {
            int components = 0;
            map<T,bool> visited;
            for(auto i:adjList)
            {
                T city = i.first;
                if(!visited[city])
                {
                    dfs(city,visited);
                    cout << endl;
                    components++;
                }
            }
            cout << "This graph has "<<components <<" connected components"<<endl;
        }
};
int main()
{
    Graph<string> g;
    g.addEdge("Amritsar","jaipur");
    g.addEdge("Amritsar","delhi");
    g.addEdge("delhi","jaipur");
    g.addEdge("mumbai","jaipur");
    g.addEdge("mumbai","bhopal");
    g.addEdge("delhi","bhopal");
    g.addEdge("mumbai","bangalore");
    g.addEdge("agra","delhi");
    g.addEdge("andaman","nicobar");
    g.connectedComponents();
    return 0;
}
