/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1697                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1697                           #+#        #+#      #+#    */
/*   Solved: 2025/04/22 19:18:44 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100001;

int main(){
    int n, k;
    cin >> n >> k;

    queue<pair<int, int>> q;
    vector<bool> visited(MAX+1, false);
    q.push({n, 0});
    visited[n] = true;
    int op = 0;
    
    while(!q.empty()){
        auto& p = q.front(); q.pop();
        int cur_val = p.first;
        int cur_time = p.second;

        if(cur_val == k){
            op = cur_time;
            break;
        }

        if(cur_val - 1 >= 0 && !visited[cur_val - 1]){
            visited[cur_val - 1] = true;
            q.push({cur_val - 1, cur_time+1});
        }
        if(cur_val + 1 < MAX && !visited[cur_val + 1]){
            visited[cur_val + 1] = true;
            q.push({cur_val + 1, cur_time+1});
        }
        if(cur_val * 2 < MAX && !visited[cur_val * 2]){
            visited[cur_val *2 ] = true;
            q.push({cur_val * 2, cur_time+1});
        }
    }
    cout << op;
}