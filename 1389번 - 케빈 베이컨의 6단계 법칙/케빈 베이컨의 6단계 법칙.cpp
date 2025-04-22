/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1389                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1389                           #+#        #+#      #+#    */
/*   Solved: 2025/04/22 18:51:50 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<iostream>
#include<queue>
#include<limits>

using namespace std;

void connect(vector<vector<int>>& v, int x, int y){
    v[x].push_back(y);
    v[y].push_back(x);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    for(int i = 0; i < m; i ++){
        int x, y;
        cin >> x >> y;
        connect(v, x, y);
    }
    long long op_val = numeric_limits<long long>::max();
    int op_idx = 0;
    vector<bool> visited(n+1, false);
    vector<int> result(n+1, 0);
    
    for(int i = 1; i <= n; i++){
        queue<pair<int, int>> q;
        fill(visited.begin(), visited.end(), false);
        fill(result.begin(), result.end(), 0);

        q.push({i, 0});
        visited[i] = true;
        result[i] = 0;

        while(!q.empty()){
            auto& p = q.front(); q.pop();
            int cur_idx = p.first;
            int cur_count = p.second;
            for(int idx : v[cur_idx]){
                if(visited[idx]) continue;
                visited[idx] = true;
                result[idx] = cur_count+1;
                q.push({idx, cur_count+1});
            }
        }
        
        long long output = 0;
        for(int i : result){
            output += i;
        }
        
        if(op_val > output){
            op_val = output;
            op_idx = i;
        }
    }

    cout << op_idx;
    return 0;
}