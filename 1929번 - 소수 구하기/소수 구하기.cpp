/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1929                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1929                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 19:41:22 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    vector<bool> v(m+1, false);
    v[0] = true;
    v[1] = true;
    for(int i = 2; i * i <= m; i++){
        if(v[i]) continue;
        for (int j = i*i; j <= m; j+=i)
        {
            v[j] = true;
        }
    }
    
    for(int i = n; i<=m; i++){
        if(v[i]) continue;
        cout << i << "\n";
    }
}