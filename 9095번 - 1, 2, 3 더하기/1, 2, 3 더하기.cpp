/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9095                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9095                           #+#        #+#      #+#    */
/*   Solved: 2025/04/18 00:27:11 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

int _count = 0;

void dfs(int num){
    if(num == 0) {
        _count += 1;
        return;
    }

    if(num >= 1){
        dfs(num-1);
    }
    if(num >= 2){
        dfs(num-2);
    }
    if(num >= 3){
        dfs(num-3);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >>t;
    int v[11];
    fill(v, v+11, -1);
    v[0] = 0;
    for(int i = 0; i < t; i++){
        _count = 0;
        int num;
        cin >> num;
        if(v[num] == -1){
            dfs(num);
            v[num] = _count;
        }
        cout << v[num] << "\n";
    }
}