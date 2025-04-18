/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 17219                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/17219                          #+#        #+#      #+#    */
/*   Solved: 2025/04/17 19:04:51 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> map;
    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        map[s1] = s2;
    }

    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        cout << map[s] << "\n";
    }
}