/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9461                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9461                           #+#        #+#      #+#    */
/*   Solved: 2025/04/18 01:11:47 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<int> tc(t);
    for(int i = 0; i < t; i++){
        cin >> tc[i];
    }
    int m = *max_element(tc.begin(), tc.end());
    int max_count = max(3, m);
    vector<size_t> v(max_count, 0);
    v[0] = 1;
    v[1] = 1;
    v[2] = 1;
    for(int i = 0; i+3 < max_count; i++){
        v[i+3] = v[i] + v[i + 1];
    }

    for(int i : tc){
        cout << v[i-1] << "\n";
    }
}
