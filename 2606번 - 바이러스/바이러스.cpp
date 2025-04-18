/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2606                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2606                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 23:57:26 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<vector>

using namespace std;

void connect(vector<vector<int>>& line, int x, int y){
    line[x].push_back(y);
    line[y].push_back(x);
}

static int _count = 0;

void dfs(vector<vector<int>>& line, vector<bool>& vistied, int idx){
    vistied[idx] = 1;
    _count++;
    for(int i : line[idx]){
        if(vistied[i]){
            continue;
        }
        dfs(line, vistied, i);
    }
}   

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<vector<int>> line(n+1);
    vector<bool> vistied(n+1, false);
    int m;
    cin >> m;
    for(int i =0; i < m; i++){
        int x, y;
        cin >> x >> y;
        connect(line, x, y);
    }
    _count = 0;
    dfs(line, vistied, 1);
    cout << _count -1;
}
