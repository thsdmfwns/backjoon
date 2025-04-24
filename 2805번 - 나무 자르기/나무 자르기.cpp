/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2805                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2805                           #+#        #+#      #+#    */
/*   Solved: 2025/04/21 18:35:18 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector> 
#include<algorithm>

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
    ll st = 0;
    ll ed = v.back();
    ll op = 0;
    while(st <= ed){
        ll mid = st + (ed - st) / 2;
        ll count = 0;

        for(auto i : v){
            if(i > mid) count += i - mid;
            if (count >= m) break;
        }

        if(count >= m){
            op = mid;
            st = mid +1;
        }
        else{
            ed = mid - 1;
        }
    }
    
    cout << op;
}