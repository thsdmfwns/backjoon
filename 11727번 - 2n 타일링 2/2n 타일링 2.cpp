/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11727                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11727                          #+#        #+#      #+#    */
/*   Solved: 2025/04/18 20:50:10 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    for (int i = 2; i <= n; ++i) {
        dp[i] = (dp[i-1] + dp[i-2]*2) % 10007;
    }
    cout << dp[n];
}
