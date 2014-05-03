#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
bool visited[10001];

bool breadth_first_search(vector< vector<int> > graph, int u, int N) {
	memset(visited, false, N + 1);
	queue<int> q;
	q.push(u);

	int count = 0;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		visited[v] = true;

		for (int i = 0; i < graph[v].size(); i++) {
			int k = graph[v][i];
			if (visited[k]) {
				return false;
			} else {
				q.push(k);
			}
		}
		count++;
	}
	if (count != N) {
		return false;
	} else {
		return true;
	}
}

int main() {
	int N, M, u, v;
	scanf("%d %d", &N, &M);

	vector< vector<int> > graph(N + 1);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
	}

	if (breadth_first_search(graph, 1, N)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}