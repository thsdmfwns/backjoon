/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1012                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1012                           #+#        #+#      #+#    */
/*   Solved: 2025/04/21 15:44:45 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;
//            12 6  3  9
int dx[4] = { 0, 0, 1, -1};
int dy[4] = { 1, -1, 0, 0}; 

// 0이 할당 x 배추

void set(vector<vector<int>>& v, int n, int m, int x, int y, int count){
    v[y][x] = count;

    for(int i = 0; i < 4; i++){
        int _x = dx[i] + x;
        int _y = dy[i] + y;
        if(_x < 0 || _y < 0 || _x >= n || _y >= m) continue;
        if(v[_y][_x] == 0){
            set(v, n, m, _x, _y, count);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> v(m, vector<int>(n, -1));
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            v[y][x] = 0;
        }
        int op = 0;
        for(int y = 0; y < m; y++){
            for(int x = 0; x < n; x++){
                if(v[y][x] == 0){
                    set(v, n, m, x, y, ++op);
                }
            }
        }
        cout << op << "\n";
    }
    return 0;
}