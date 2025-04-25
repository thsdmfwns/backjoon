/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11403                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11403                          #+#        #+#      #+#    */
/*   Solved: 2025/04/25 14:54:26 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>


using namespace std;

void dfs(vector<vector<int>>& v, vector<bool>& vistied, int idx, int st){
    for(int i = 0; i < v.size(); i++){
        if(v[idx][i] == 1 && !vistied[i]){
            v[st][i] = 1;
            vistied[i] = true;
            dfs(v, vistied, i, st);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    vector<bool> vistied(n, false);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        fill(vistied.begin(), vistied.end(), false);
        dfs(v, vistied, i, i);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}