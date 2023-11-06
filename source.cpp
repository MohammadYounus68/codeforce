#include<bits/stdc++.h>
using namespace std;

#define MX 1000

vector < char > graph[MX];
bool vis[MX];
int dist[MX];
char parent[MX];
void bfs(char source)
{
    queue < char > Q;
    vis[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while(!Q.empty())
    {
        char node = Q.front();
        Q.pop();
        cout<<node<<" ";

        for (int i = 0; i < graph[node].size(); i++)
        {
            char next = graph[node][i];
            if (vis[next] == 0)
            {
                vis[next] = 1; 
                dist[next-64] = dist[node-64] + 1; 

                Q.push(next); 

                parent[next] = node;
            }
        }
    }
}


void printPathRecursive(char source, char node)
{
    if (node == source)
    {
        cout << node << " ";
        return;
    }


    printPathRecursive(source, parent[node]);
    cout << node << " ";
}


int main()
{
    int nodes, edges;

    cout<<"Enter Node And Edges : \n";
    cin >> nodes >> edges;
    cout<<"Enter your Node1 Node2 for Edges :\n";
    for (int i = 1; i <= edges; i++)
    {
        char u, v;

        cin >> u >> v;

        graph[u].push_back(v);    

    }

    char source;
    cout<<"Enter your Source Node :\n";
    cin >> source;

    cout << " Reachable from source node : " << source << endl;

    bfs(source);

    cout<<endl;

    for (int i = 1; i <= nodes; i++)
    {
        char a=i+64;
        if(!vis[a]) continue;
        cout << "Path to source : " << "to "<<a<<": ";
        printPathRecursive(source, a);
        cout << endl;
    }

    cout << endl;

    return 0;
}

/**

7 9
A B
A C
A G
B C
C G
B D
D E
C F
E F
A

**/

/**

6
8
A B
A C
B D
B E
C E
D E
D F
E F
A

///////////

9 16
A B
A D
B A
B E
C B
C E
C F
D E
D H
E I
F E
F I
G D
G H
H E
H I
A

*/