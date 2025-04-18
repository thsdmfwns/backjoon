/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1620                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1620                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 15:20:34 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> v(n +1);
    unordered_map<string, int> map;

    for(int i = 1; i < n+1; i++){
        string s;
        cin >> s;
        v[i] = s;
        map[s] = i;
    }

    for(int i = 0; i < m; i++){
        string s;
        int num;
        cin >> s;
        if(s[0] >= '0' && s[0] <= '9'){
            num = stoi(s);
            cout << v[num] << "\n";
        }
        else{
            cout << map[s] << "\n";
        }
    }
}