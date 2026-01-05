class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);
        vector<int> in(numCourses, 0);

        // Build graph
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
            in[p[0]]++;
        }

        queue<int> q;

        // Push courses with indegree 0
        for (int i = 0; i < numCourses; i++) {
            if (in[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;

        // BFS
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            count++;

            for (int next : adj[node]) {
                in[next]--;
                if (in[next] == 0) {
                    q.push(next);
                }
            }
        }

        return count == numCourses;
    }
};
