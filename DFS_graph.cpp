#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class Graph {
    int V;
    list<int> * l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u = 0; u < V; u++){
            list<int> neighbours = l[u];
            cout<<u << " : ";
            for(int v : neighbours){
                cout << v << " ";
            }
            cout << endl;
        }
    }

    void dfsHelper(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";

        list<int> neighours = l[u];
        for(int v : neighours){
            if(!vis[v]){
                dfsHelper(v,vis);
            }
        }
    }
    void dfs(){
        vector<bool> vis(V , false); // use actual vertex count
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                dfsHelper(i, vis);
            }
        }
       cout << endl;
    }

    // HashPath problem

    bool pathHelper(int src, int dest, vector<bool> &vis){
        if(src == dest){
            return true;
        }
        vis[src] = true;
        list<int> neighours = l[src];

        for(int v : neighours){
            if(!vis[v]){
                if(pathHelper(v, dest, vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool hashPath(int src, int dest){
     vector<bool> vis(V , false);
     return pathHelper(src, dest, vis);

    }

};


int main(){

   Graph graph(10); // 0..9 used in edges

   graph.addEdge(0,2);
   graph.addEdge(2,5);
   graph.addEdge(2,0);
   graph.addEdge(1,6);
   graph.addEdge(6,4);
   graph.addEdge(4,3);
   graph.addEdge(4,9);
   graph.addEdge(3,7);
   graph.addEdge(3,8);

  graph.dfs();
//   cout << graph.hashPath(5,6) << endl;
  

    return 0;
}