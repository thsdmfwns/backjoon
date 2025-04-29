/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2798                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2798                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 16:10:17 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;

int result = -1;

void dfs(vector<int>& v, int level, int cur, int st, int m){
    if(level >= 3){
        result = max(cur, result);
        return;
    }
    for(int i = st; i < v.size(); i++){
        if(cur + v[i] > m) continue;
        dfs(v, level +1, cur + v[i], i+1, m);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    dfs(v, 0, 0, 0, m);

    cout << result;    
}