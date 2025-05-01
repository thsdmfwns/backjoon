/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2775                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2775                           #+#        #+#      #+#    */
/*   Solved: 2025/05/01 16:15:02 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    vector<vector<int>> v(15, vector<int>(15, 0));
    for(int i = 0 ; i <=14; i++){
        v[0][i] = i;
    }

    int tc = 0;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        int k, n;
        cin >> k >> n;
        for(int i = 1; i<=k; i++){
            for(int j = 1; j <= n; j++){
                v[i][j] = v[i -1][j] + v[i][j-1];
            }
        }
        cout << v[k][n] << "\n";
    }
}