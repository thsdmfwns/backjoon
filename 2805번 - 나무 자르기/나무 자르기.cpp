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

bool count(vector<int>& v, int st, int n, int m){
    int cnt = 0;
    for(int i = st + 1; i < n; i++){
        cnt += v[i] - v[st];
    }
    return cnt >= m;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int st = n;
    while(1){
        if(st < 0) break;
        if(count(v, --st, n, m)) break;
    }
    cout << v[st];
}