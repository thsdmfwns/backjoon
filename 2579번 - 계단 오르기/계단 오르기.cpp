/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2579                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2579                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 21:23:25 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n +1);
    for(int i = 1; i < n+1; i++){
        cin >> v[i];
    }
    vector<int> dp(n+1, 0);
    dp[1] = v[1];
    dp[2] = v[1] + v[2];
    for(int i = 3; i < n +1; i++){
        int a = dp[i - 3] + v[i-1] + v[i];
        int b = dp[i -2] + v[i];
        dp[i] = max(a, b);
    }
    cout << dp[n];
}