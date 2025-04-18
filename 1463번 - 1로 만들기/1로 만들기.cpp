/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1463                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1463                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 21:01:23 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <queue>
#include <limits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    int result = 0;
    //current num, count
    queue<pair<int, int>> que;
    int n;
    cin >> n;
    que.push({n, 0});
    while(!que.empty()){
        auto p = que.front();
        que.pop();
        int num = p.first;
        int count = p.second;
        if(num == 1){
            result = count;
            break;
        }

        if(num % 2 == 0){
            que.push({num/2, count + 1});
        }
        if(num % 3 == 0){
            que.push({num/3, count + 1});
        }
        que.push({num-1, count + 1});
    } 

    cout << result;
}