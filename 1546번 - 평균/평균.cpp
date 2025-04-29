/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1546                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1546                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 17:43:32 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int max_n = 0;
    for(int i =0; i< n; i ++){
        cin >> v[i];
        max_n = max(max_n, v[i]);
    }
    double ans = 0.0;
    for(int i =0; i<n; i++){
        ans += (double(v[i]) / max_n) * 100;
    }
    cout << ans/n;
}