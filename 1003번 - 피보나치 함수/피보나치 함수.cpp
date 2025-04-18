/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1003                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1003                           #+#        #+#      #+#    */
/*   Solved: 2025/04/17 19:28:33 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int zero = 0;
int one = 0;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> v(t);
    for(int i = 0; i < t; i++){
        cin >> v[i];
    }
    int max_count = max(2, *max_element(v.begin(), v.end()) + 1);
    
    vector<pair<int, int>> outputs(max_count);
    outputs[0] = {1, 0};
    outputs[1] = {0, 1};
    for(int i = 2; i < max_count; i++){
        outputs[i] = {outputs[i-1].second, outputs[i-1].first + outputs[i-1].second};
    }

    for(int i = 0; i < t; i++){
        cout << outputs[v[i]].first << " " << outputs[v[i]].second << "\n";
    }
}