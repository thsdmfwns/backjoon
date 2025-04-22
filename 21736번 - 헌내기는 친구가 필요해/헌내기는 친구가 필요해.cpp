/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 21736                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/21736                          #+#        #+#      #+#    */
/*   Solved: 2025/04/22 15:30:06 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<vector>
#include<iostream>
#include<string>
#include<queue>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int st_x, st_y;
    for(int i = 0; i < n; i++){
        bool f = false;
        for(int j = 0; j < m; j++){
            if(v[i][j] == 'I') {
                st_x = j;
                st_y = i;
                f = true;
                break;
            }
        }
        if(f) break;
    }
    queue<pair<int, int>> q;
    q.push({st_x, st_y});
    int count = 0;
    while(!q.empty()){
        auto& p = q.front(); q.pop();
        int cur_x = p.first;
        int cur_y = p.second;
        for(int i = 0; i < 4; i++){
            int x = cur_x + dx[i];
            int y = cur_y + dy[i];
            if(x < 0 || y < 0 || x >= m || y >= n || ( v[y][x] != 'O' && v[y][x] != 'P'))
                continue;
            if(v[y][x] == 'P')
                count++;
            v[y][x] = '1';
            q.push({x, y});
        }
    }
    if(count == 0)
        cout << "TT";
    else
        cout << count;
        
    return 0;
}