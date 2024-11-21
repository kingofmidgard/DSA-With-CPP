#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int V; //Count of vertices
    list<int> *l; //store list of integer int* arr
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V]; //arr= new int[n] we store a list in each indices...
    }
    void addEdge(int u,int v){ //edge from u to v
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u=0;u<V;u++){
            list<int> neigbours=l[u];
            cout<<u<<":";
            for(int v: neigbours){
                cout<<v<<" "; 
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph graph(5);
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);
    graph.print();
    return 0;
}
