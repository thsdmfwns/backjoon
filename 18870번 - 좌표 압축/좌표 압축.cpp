/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18870                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18870                          #+#        #+#      #+#    */
/*   Solved: 2025/04/22 15:08:11 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> v_sorted(n);
    for(int i = 0; i < n; i ++){
        ll k;
        cin >> k;
        v[i] = k;
        v_sorted[i] = k;
    }
    sort(v_sorted.begin(), v_sorted.end());
    unordered_map<ll, ll> map;
    int val = 0;
    for(int i = 0; i < n; i++){
        if(map.find(v_sorted[i]) != map.end()) continue;
        map[v_sorted[i]] = val++;
    }

    for(ll i : v){
        cout << map[i] << " ";
    }

}