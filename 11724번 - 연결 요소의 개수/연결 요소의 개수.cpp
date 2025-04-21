/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11724                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11724                          #+#        #+#      #+#    */
/*   Solved: 2025/04/21 18:54:26 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;

void connect(vector<vector<int>>& v, int x, int y){
    v[x].push_back(y);
    v[y].push_back(x);
}

void dfs(vector<vector<int>>& v, vector<int>& visited, int idx){
    visited[idx] = true;
    for(int i : v[idx]){
        if(visited[i]) continue;
        dfs(v, visited, i);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    vector<int> visited(n+1);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >>y;
        connect(v, x, y);
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i]) continue;
        count++;
        dfs(v, visited, i);
    }
    cout << count;
    return 0;
}