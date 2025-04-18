/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1764                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1764                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 18:01:33 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string, bool> map;
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        map[s] = 1;
    }
    int idx = 0;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(map[s])
            v[idx++] = s;
    }

    sort(v.begin(), v.begin() + idx);
    cout << idx << "\n";
    for(int i = 0;  i < idx; i++){
        cout << v[i] << "\n";
    }
}