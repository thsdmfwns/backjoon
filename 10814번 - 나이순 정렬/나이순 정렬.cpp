/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10814                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10814                          #+#        #+#      #+#    */
/*   Solved: 2025/05/02 14:27:26 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<string> names(n);
    for(int i = 0; i < n; i++){
        int num;
        string name;
        cin >> num >> name;
        v[i] = {num, i};
        names[i] = name;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << names[v[i].second] << "\n";
    }    
}