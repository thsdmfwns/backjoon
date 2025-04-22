/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2178                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2178                           #+#        #+#      #+#    */
/*   Solved: 2025/04/22 20:34:00 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

struct miro{
    int x;
    int y;
    int score;
};

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i ++){
        cin >> v[i];        
    }
    queue<miro> q;
    q.push({0, 0, 1});
    v[0][0] = '2';
    while(!q.empty()){
        auto p = q.front(); q.pop();
        int cur_x = p.x;
        int cur_y = p.y;
        int cur_score = p.score;
        for(int i = 0; i < 4; i++){
            int x = cur_x + dx[i];
            int y = cur_y + dy[i];
            int score = cur_score +1;
            
            if(x < 0 || y < 0 || x >= m || y >= n || v[y][x] != '1') continue;
            if(y == n-1 && x == m-1){
                cout << score;
                return 0;
            }
            v[y][x] = '2';
            q.push({x, y, score});
        }
    }
    return 0;
}