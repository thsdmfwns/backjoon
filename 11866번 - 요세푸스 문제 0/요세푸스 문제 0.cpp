/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11866                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11866                          #+#        #+#      #+#    */
/*   Solved: 2025/05/07 17:37:19 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    cout << "<";
    while(!q.empty()){
        for(int i = 0; i < k-1; i++){
            int num = q.front(); q.pop();
            q.push(num);
        }
        cout << q.front();
        q.pop();
        if(!q.empty())
            cout << ", ";
    }
    cout << ">";
}