/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4153                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4153                           #+#        #+#      #+#    */
/*   Solved: 2025/04/28 16:33:54 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    while(true){
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        if(v[0] == 0 && v[1] == 0 && v[2] == 0)
            return 0;
        sort(v.begin(), v.end());
        string ans = v[0] * v[0] + v[1] * v[1] == v[2] * v[2] ? "right" : "wrong";
        cout << ans << "\n";
    }

}