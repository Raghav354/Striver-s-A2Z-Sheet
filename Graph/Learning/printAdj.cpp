vector<vector<int>> printGraph(int V, vector<pair<int, int>> edges)
{
    vector<vector<int>> adj(V + 1);
    for (int i = 0; i < edges.size(); i++)
    {
        int fNode = edges[i].first;
        int sNode = edges[i].second;

        adj[fNode].push_back(sNode);
        adj[sNode].push_back(fNode);
    }
    return adj;
}