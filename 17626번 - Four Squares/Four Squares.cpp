/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17626                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17626                          #+#        #+#      #+#    */
/*   Solved: 2025/04/18 21:25:09 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> dp(n+1, n+1);
    dp[0] = 0;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j*j <= i; ++j){
            dp[i] = min(dp[i], dp[i - j*j] + 1);
        }
    }
    
    cout << dp[n];
    return 0;
}