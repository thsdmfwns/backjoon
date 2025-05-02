/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10816                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10816                          #+#        #+#      #+#    */
/*   Solved: 2025/05/02 16:02:10 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<unordered_map>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_map<ll, ll> map;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        map[num]++;
    }

    int m;
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        cout << map[num] << " ";
    }
}