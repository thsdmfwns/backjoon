/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1966                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1966                           #+#        #+#      #+#    */
/*   Solved: 2025/04/24 13:54:34 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<queue>
#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n, m;
        cin >> n >> m;
        queue<pair<int, bool>> q;
        priority_queue<int> heap;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(i == m ) q.push({num, true});
            else q.push({num, false});
            heap.push(num);
        }

        int ans = 0;
        while(!q.empty()){
            auto p = q.front(); q.pop();
            int num = p.first;
            bool is_he = p.second;
            if(heap.top() == num){
                heap.pop();
                ans++;
                if(is_he){
                    break;
                }
            }
            else{
                q.push(p);
            }
        }
        cout << ans << "\n";
    }
}