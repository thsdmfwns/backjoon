/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11659                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11659                          #+#        #+#      #+#    */
/*   Solved: 2025/04/18 20:53:42 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    int v[100001];
    int dp[100001] = {0};
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        dp[i] = dp[i-1] + v[i];
    }

    for(int tc = 0; tc < m; tc++){
        int x, y;
        cin >> x >> y;
        int op = dp[y] - dp[x - 1];
        cout << op << '\n';
    }
}