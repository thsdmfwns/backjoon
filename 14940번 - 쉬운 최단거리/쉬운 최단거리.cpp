/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 14940                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/14940                          #+#        #+#      #+#    */
/*   Solved: 2025/04/25 14:33:08 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct land{
    int x;
    int y;
    int score;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    int tx = 0;
    int ty = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if(v[i][j] == 2){
                tx = j;
                ty = i;
            }
        }
    }
    vector<vector<int>> output(n, vector<int>(m, 0));
    queue<land> q;
    q.push({tx, ty, 0});
    while(!q.empty()){
        auto l = q.front();  q.pop();
        int cx = l.x;
        int cy = l.y;
        int cscore = l.score;

        for(int i = 0; i < 4; i++){
            int x = cx + dx[i];
            int y = cy + dy[i];
            if(x < 0 || y < 0 || x >= m || y >= n) continue;
            if(v[y][x] != 1) continue;
            v[y][x] = 3;
            output[y][x] = cscore + 1;
            q.push({x, y, cscore + 1});
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 1) cout << -1 << " ";
            else cout << output[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}