/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30804                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30804                          #+#        #+#      #+#    */
/*   Solved: 2025/04/22 16:11:21 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int count[10] = {0};
    int st, ed;
    st = 0;
    ed = 0;
    int dist = 0;
    int result = -1;
    for(ed = 0; ed < n; ed++){
        count[v[ed]]++;
        if(count[v[ed]] == 1) dist++;
        if(dist > 2){
            while(1){
                if(dist <= 2){
                    break;
                }
                count[v[st]]--;
                if(count[v[st]] == 0) dist--;
                st++;
            }
        }

        result = max(result, ed - st +1);        
    }
    cout << result;
}