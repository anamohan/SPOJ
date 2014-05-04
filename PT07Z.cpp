#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

#define inf 1000000000
#define MAXN 10000

using namespace std;

int dist[MAXN];

int breadth_first_search(vector< vector<int> > graph, int node, int N) {
	queue<int> q;
	memset(dist, -1, sizeof dist);
	dist[node] = 0;
	q.push(node);

	while (!q.empty()) {
		int k = q.front();
		q.pop();
		for (int i = 0; i < graph[k].size(); i++) {
			if (dist[graph[k][i]] == -1) {
				q.push(graph[k][i]);
				dist[graph[k][i]] = dist[k] + 1;
			}
		}
	}

	int max_dist = dist[node];
	int max_node = node;
	for (int i = 1; i <= N; i++) {
		if (dist[i] > max_dist) {
			max_dist = dist[i];
			max_node = i;
		}
	}
	return max_node;
}

int main() {
	int N, u, v;

	scanf("%d", &N);
	vector< vector<int> > graph(N + 1);

	for (int i = 0; i < N - 1; i++) {
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int node = breadth_first_search(graph, 1, N);
	node = breadth_first_search(graph, node, N);

	printf("%d\n", dist[node]);

	return 0;
}