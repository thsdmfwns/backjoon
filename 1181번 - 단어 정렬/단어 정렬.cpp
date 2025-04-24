/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1181                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1181                           #+#        #+#      #+#    */
/*   Solved: 2025/04/23 20:25:43 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<priority_queue<string, vector<string>, greater<string>>> v(51);
    unordered_set<string> set;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(set.find(s) == set.end()){
            set.insert(s);
            v[s.length()].push(s);
        }
    }

    for(int i = 1; i <= 50; i++){
        if(v[i].empty()) continue;
        while(!v[i].empty()){
            cout << v[i].top() << "\n";
            v[i].pop();
        }
    }
}