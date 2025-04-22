/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2667                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2667                           #+#        #+#      #+#    */
/*   Solved: 2025/04/22 22:17:29 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};


int bfs(vector<string>& v, int x, int y){
    int n = v.size();
    queue<pair<int, int>> q;
    int result = 1;
    q.push({x, y});
    v[y][x] = '2';
    while(!q.empty()){
        auto p = q.front(); q.pop();
        int cx = p.first;
        int cy = p.second;
        for(int i = 0; i < 4; i++){
            int x = cx + dx[i];
            int y = cy + dy[i];
            if(x < 0 || y < 0 || x >= n || y >= n) continue;
            if(v[y][x] != '1') continue;
            v[y][x] = '2';
            result++;
            q.push({x, y});
        }
    }
    return result;
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> v_result;
    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == '1'){
                v_result.push_back(bfs(v, j, i));
            }
        }
    }

    sort(v_result.begin(), v_result.end());
    cout << v_result.size() << "\n";
    for(int i : v_result){
        cout << i << "\n";
    }
}