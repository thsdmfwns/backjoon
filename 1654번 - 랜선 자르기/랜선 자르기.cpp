/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1654                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1654                           #+#        #+#      #+#    */
/*   Solved: 2025/04/24 13:33:05 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll st = 1;
    ll ed = v.back();
    ll op = 0;

    while(st <= ed){
        ll mid = st + (ed - st) / 2;
        ll count = 0;
        for(ll i : v){
            count += i / mid;
        }
        if(count >= m){
            op = max(op, mid);
            st = mid +1;
        }
        else{
            ed = mid - 1;
        }
    }
    cout << op;
    return 0;
}