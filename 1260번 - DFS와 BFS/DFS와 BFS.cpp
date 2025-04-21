/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1260                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1260                           #+#        #+#      #+#    */
/*   Solved: 2025/04/21 16:09:15 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void connect(vector<priority_queue<int, vector<int>, greater<int>>>& dfs, 
    vector<priority_queue<int, vector<int>, greater<int>>>& bfs, 
    int x, int y){
        dfs[x].push(y);
        bfs[x].push(y);
        dfs[y].push(x);
        bfs[y].push(x);
}

void do_dfs(vector<priority_queue<int, vector<int>, greater<int>>>& dfs, 
    vector<bool>& dfs_vistited, 
    int v){
    dfs_vistited[v] = true;
    cout << v << " ";
    while(!dfs[v].empty()){
        int idx = dfs[v].top();
        dfs[v].pop();
        if(dfs_vistited[idx]) continue;
        do_dfs(dfs, dfs_vistited, idx);
    }
}

void do_bfs(
    vector<priority_queue<int, vector<int>, greater<int>>>& bfs,
    vector<bool>& bfs_vistited,
    int v){
    queue<int> q;
    q.push(v);
    bfs_vistited[v] = true;
    while(!q.empty()){
        int idx = q.front();
        q.pop();
        cout << idx << " ";
        while(!bfs[idx].empty()){
            int i = bfs[idx].top();
            bfs[idx].pop();
            if(bfs_vistited[i]) continue;
            bfs_vistited[i] = true;
            q.push(i);
        }
    }
}



int main(){

    int m, n, v;
    cin >> n >> m >> v;
    vector<priority_queue<int, vector<int>, greater<int>>> dfs(n+1);
    vector<priority_queue<int, vector<int>, greater<int>>> bfs(n+1);
    vector<bool> dfs_vistited(n+1, false);
    vector<bool> bfs_visitied(n+1, false);

    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        connect(dfs, bfs, x, y);
    }

    do_dfs(dfs, dfs_vistited, v);
    cout << "\n";
    do_bfs(bfs, bfs_visitied, v);

    return 0;
}