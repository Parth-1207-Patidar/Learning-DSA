#include <iostream>
#include <queue>
#include <stack>
using namespace std;

#define V 3
#define INF 9999999999999

void warshall(int graph[V][V]){
    for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

void floydWarshall(int graph[V][V]){
    for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
}

void bfs(int graph[V][V], int start, int n){
    queue <int> q;
    bool visited[V] = {false};
    visited[start] = true;
    q.push(start);

    while(q.empty() == false){
        int current = q.front();
        cout << current << " ";

        q.pop();

        for (int i=0; i<n; i++){
            if (graph[current][i] == 1 && visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void dfs(int graph[V][V], int start, int n){
    stack <int> s;
    bool visited[V] = {false};
    s.push(start);

    while(s.empty() == false){
        int current = s.top();
        s.pop();

        if (visited[current] == false){
            visited[current] = true;
            cout << current << " ";
        }

        for (int i=n-1; i>=0; i--){
            if (graph[current][i] == 1 && visited[i] == false){
                s.push(i);
            }
        }
    }
    
}



void print(int graph[V][V]){
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int graph[V][V] = { {3, 1, 2},
                        {1, 5, 1},
                        {6, 0, 1} };

    // warshall(graph);
    // print(graph);
    floydWarshall(graph);
    print(graph);
}


