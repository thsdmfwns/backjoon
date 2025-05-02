/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2164                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2164                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 15:06:09 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> q;
    for(int i = 1; i <= n; i++){
        q.push_back(i);
    }

    while(q.size() > 1){
        q.pop_front();
        int k = q.front();
        q.pop_front();
        q.push_back(k);
    }

    cout << q.front();
}