#include<bits/stdc++.h> 
using namespace std;
class GraphWithFixedListArray{
    public:
        vector<int> v[100];
        
        int vertex, edge; 

        void graph_insert(){
            cout << "Enter vertex & node: " << endl;
            cin >> vertex >> edge; 
            int x,y; 
            for(int i = 0; i < edge; i++){
                cout << "vertex->edge: " << endl;
                cin >>x >> y ;
                v[x].push_back(y);
            }
        }

        void graph_print(){
            cout << "the graph: " << endl;
            for( int i = 0; i <= edge; i++){
                cout << i << " -> " ;
                for( int j=0; j<=v[i].size(); j++){
                    cout << v[i][j] << "->";
                }
                cout << endl;
            }
        }

};

class GraphWithAdjacencyList{
    public: 
        vector< vector<pair<int, int> > > adjList; 
        int v, e;
        // GraphWithAdacencyList(int v, int e){
        //     this->v = v;
        //     this->e = e;
        // }

        void graphInsert(){
            printf("Enter vertex numbers: ");
            scanf("%d",&v);
            adjList.assign(v, vector<pair<int,int>>());
            for(int i=0; i<v; i++){
                int total_neighbors;
                printf("Enter neighbor of vertex - (%d) ", i);
                scanf("%d",&total_neighbors);
                for(int j = 0; j < total_neighbors; j++){
                    int w;
                    scanf("%d%d", &e,&w);
                    adjList[i].push_back(pair<int, int> (e,w));
                }
            }
        }

        void graphPrint(){
            for(int i = 0; i < v; i++){
                for( auto j = adjList[i].begin(); j != adjList[i].end(); j++){
                    printf("Edge (%d - %d) weight - %d\n", i, j->first, j->second);
                }
            }
        }


};

class GraphWithAdjacencyMatrix{
    public:
        int adjMat[100][100];
        int v;
        void graphInsert(){
            cin >> v;
            for( int i = 0; i < v; i++){
                for(int j = 0; j < v; j++){
                    scanf("%d",&adjMat[i][j]);  
                }
            }
        }


};

class GraphWithPriorityQueue{
    public:
        priority_queue<int, pair<int, int>> edgeList; 
        int e;
        void graphInsert() {
            scanf("%d", &e);
            for(int i = 0; i < e; i++){
                int u,v, w;
                scanf("%d%d%d",&u,&v,&w);
                edgeList.push(make_pair(-w, pair<int,int>(u,v)));
            }
        }

};

int main(){

}