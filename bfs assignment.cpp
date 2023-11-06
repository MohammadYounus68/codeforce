#include<bits/stdc++.h>
using namespace std;

#define W 0
#define G 1
#define B 2
#define S 100

int adj_matrix[S][S];
int col[S];
int par[S];
int dis[S];

int numberMap[S];
int indexMap[S];

int bfsCount, dfsCount;

void bfs(int adj[][S], int vertex, int startingNode);
void dfs(int adj[][S], int vertex, int startingNode);
void printPath(int startingNode, int endNode);

void print_Path_Recursive(int source, int node)
{
    if(col[node] == W) {
        cout << "Unreachable ";
        return;

    }
    if (node == source)
    {
        cout << indexMap[node] << " ";
        return;
    }


   print_Path_Recursive(source, par[node]);
    cout << indexMap[node] << " ";
}

void print_Map(){
    cout<<"Number-of Map:"<<endl;
    for(int i=0; i<20; i++){
        cout<<i<<" "<<numberMap[i]<<endl;
    }
    cout<<endl;
}

int main()
{

    memset(numberMap, -1, S);
    memset(indexMap, -1, S);
    print_Map();

    int vertex;
    int edge;
    cin >> vertex >> edge;
    cout << "Vertex is : " << vertex <<endl;
    cout << "Edge is : " << edge <<endl;

    int node1,node2;

    int mapIndex = 0;
    for(int i = 0 ; i< edge ; i++)
    {

        cin >> node1 >> node2;
        if ( numberMap[node1] == -1){
            numberMap[node1] = mapIndex;
            indexMap[mapIndex] = node1;
            mapIndex++;
        }
        if ( numberMap[node2] == -1 ){
            numberMap[node2] = mapIndex;
            indexMap[mapIndex] = node2;
            mapIndex++;
        }
        adj_matrix[numberMap[node1]][numberMap[node2]] = 1;
    }
    cout<<endl;

    print_Map();

    cout<<"Adjacency matrix"<<endl;
    for(int i = 0 ; i < vertex ; i++)
    {
        for(int j =  0; j < vertex ; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    int source, temp ;
    cout<<"Source : " <<endl;
    cin>>temp;
    source = numberMap[temp];

    cout<<"BFS MODULE: "<<endl<<endl<<endl;
    bfs(adj_matrix, vertex, source);
    cout << endl;

    for (int i =0; i < vertex; i++)
    {
        cout << "Path from " << indexMap[i] << " to source: ";
        print_Path_Recursive(source, i);
        cout << endl;
    }
    cout << "From node " << indexMap[source] << endl;
    for (int i = 0; i <vertex; i++){
        if(col[i] == W){
            cout << "Distance of " << indexMap[i] << " is : " << "Infinity" << endl;
        }
        else
            cout << "Distance of " << indexMap[i] << " is : " << dis[i] << endl;
    }
    cout << endl;

    memset(col, 0, S);
    memset(par, 0, S);
    memset(dis, 0, S);


    cout<<"DFS MODULE: "<<endl<<endl<<endl;
    dfs(adj_matrix, vertex, source);
    cout << endl;

    for (int i =0; i < vertex; i++)
    {
        cout << "Path from " << indexMap[i] << " to source: ";
       print_Path_Recursive(source, i);
        cout << endl;
    }
    cout << "From node " << indexMap[source] << endl;
    for (int i = 0; i <vertex; i++){
        if(col[i] == W){
            cout << "Distance of " << indexMap[i] << " is : " << "Infinity" << endl;
        }
        else
            cout << "Distance of " << indexMap[i] << " is : " << dis[i] << endl;
    }
    cout << endl;

    cout<<"BFS query count: "<<bfsCount<<endl;
    cout<<"DFS query count: "<<dfsCount<<endl;

}

void bfs(int adj[][S], int vertex, int startingNode)
{

    for(int i = 0 ; i <vertex ; i++)
    {
        if(i!= startingNode)
        {
            col[i] = W;
            dis[i] = INT_MIN;
            par[i] = -1;
        }
    }

    col[startingNode] = G;
    dis[startingNode] = 0;
    par[startingNode] = -1;
    queue <int> bfsQueue;
    bfsQueue.push(startingNode);
    cout << "Nodes reachable from Source Through BFS: ";
    while(!bfsQueue.empty())
    {
        int u = bfsQueue.front();
        cout << indexMap[u] << " ";
        bfsCount++;
        bfsQueue.pop();

        for(int i = 0 ; i < vertex ; i++)
        {
            if(adj[u][i]!=0)
            {
                int v = i;
                if(col[v] == W)
                {
                    col[v] = G;
                    dis[v] = dis[u]+1;
                    par[v] = u;



                    bfsQueue.push(v);
                }
            }
        }
        col[u] = B;
    }

}

void dfs(int adj[][S], int vertex, int startingNode)
{

    for(int i = 0 ; i <vertex ; i++)
    {
        if(i!= startingNode)
        {
            col[i] = W;
            dis[i] = INT_MIN;
            par[i] = -1;
        }
    }

    col[startingNode] = G;
    dis[startingNode] = 0;
    par[startingNode] = -1;
    stack <int> dfsStack;
    dfsStack.push(startingNode);
    cout << "Nodes reachable from Source Through DFS: ";
    while(!dfsStack.empty())
    {
        int u = dfsStack.top();
        cout << indexMap[u] << " ";
        dfsCount++;

        dfsStack.pop();

        for(int i = 0 ; i < vertex ; i++)
        {
            if(adj[u][i]!=0)
            {
                int v = i;
                if(col[v] == W)
                {
                    col[v] = G;
                    dis[v] = dis[u]+1;
                    par[v] = u;



                    dfsStack.push(v);
                }
            }
        }
        col[u] = B;
    }

}