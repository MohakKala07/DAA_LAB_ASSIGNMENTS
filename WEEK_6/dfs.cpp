/*WEEK 6
Question 1: To find if a path exists or not using Depth First Search (DFS) Algorithm
Time Complexity: Adjacency Matrix - O(V^2)
                 Adjacency List - O(V+E)
*/

#include<bits/stdc++.h>
using namespace std;

bool isPathDFS(int **AdjM, int N, int s, int d) {
    stack<int> st;
    bool *visited=new bool[N]();
    st.push(s);
    visited[s]=1;
    while (!st.empty()) {
        int u=st.top();
        st.pop();
        for (int v=0;v<N;v++) {
            if (AdjM[u][v] && v==d)
                return true;
            if (AdjM[u][v] && !visited[v]) {
                st.push(v);
                visited[v]=1;
            }
        }
    }
    return false;
}


int main(){
    int n,s,d;
    cin>>n; 
    int **AdjM; 
    AdjM=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
        AdjM[i]=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>AdjM[i][j];
        }
    }
    cin>>s>>d; 
    if(isPathDFS(AdjM,n,s-1,d-1)==true)
        cout<<"Yes Path Exists"<<endl;
    else
        cout<<"No Such Path Exists"<<endl;
}
