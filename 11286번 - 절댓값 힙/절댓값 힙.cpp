/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11286                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11286                          #+#        #+#      #+#    */
/*   Solved: 2025/04/25 15:24:37 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<queue>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll num;
        cin >> num;
        if(num == 0){
            if(q.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << q.top().second << "\n";
                q.pop();
            }
        }
        else{
            q.push({abs(num), num});
        }
    }


    return 0;
}