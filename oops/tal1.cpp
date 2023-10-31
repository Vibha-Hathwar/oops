//optimising pickup route for a ride sharing company
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
const int INF = INT_MAX;
struct Edge
{
    int to, cost;
};

int main()
{
    int n, m;
    cin >> n >> m;    
    vector<vector<Edge>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    vector<int> shortest_distance(n + 1, INF);
    shortest_distance[1] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1});
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (dist > shortest_distance[node])
            continue;
        for (const Edge& edge : graph[node])
        {
            int new_dist = shortest_distance[node] + edge.cost;
            if (new_dist < shortest_distance[edge.to])
            {
                shortest_distance[edge.to] = new_dist;
                pq.push({new_dist, edge.to});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {    if (i > 1) cout << " ";
        cout << shortest_distance[i];
    }cout << endl;
    return 0;
}
