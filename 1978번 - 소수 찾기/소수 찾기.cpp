/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1978                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1978                           #+#        #+#      #+#    */
/*   Solved: 2025/04/28 16:55:56 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int max = *max_element(v.begin(), v.end());
    vector<bool> v1(max +1, false);
    v1[0] = true;
    v1[1] = true;
    for(int i = 2; i <= max; i++){
        if(v1[i]) continue;
        for(int j = i * i; j <= max; j += i){
            v1[j] = true;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v1[v[i]]) continue;
        ans++;
    }

    cout << ans;

}