/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9375                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9375                           #+#        #+#      #+#    */
/*   Solved: 2025/04/18 15:20:06 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n;
        cin >> n;
        unordered_map<string, int> map;
        for(int i = 0; i < n; i++){
            string s1, s2;
            cin >> s1 >> s2;
            map[s2] = map[s2] + 1;
        }
        
        int output = 1;
        for(auto& p : map){
            output *= p.second + 1;
        }

        cout << output -1 << "\n";


    }
}
