#include<stdio.h>
#include<conio.h>
int a[20][20],q[20],visited[20], par[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
    visited[v]=1;

    for (i=1; i<=n; i++)
        if(a[v][i] && !visited[i])
        {
            q[++r]=i;
            par[i] = v;
        }
    if(f<=r)
    {
        bfs(q[f++]);
    }
}
void printPath(int u){
    if(!par[u]) return;
    printf("%d ", par[u]);
    printPath(par[u]);
}
int main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        q[i]=0;
        visited[i]=0;
        par[0]=0;
    }
    printf("\n Enter graph data in matrix form:\n");
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            scanf("%d",&a[i][j]);
    printf("\n Enter the starting vertex:");
    scanf("%d",&v);
    bfs(v);
    printf("\n The node which are reachable are:\n");
    for (i=1; i<=n; i++)
        if(visited[i])
            printf("%d\t",i);
        else
            printf("\n%d is unreachable\n", i);

    printf("\n");
    for(i=1; i<=n; i++){
        printf("Path of %d: ", i);
        printPath(i);
        printf("\n");
    }
}
