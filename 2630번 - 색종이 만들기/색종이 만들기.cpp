/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2630                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2630                           #+#        #+#      #+#    */
/*   Solved: 2025/04/21 17:56:48 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>

using namespace std;

int blue_count = 0;
int white_count = 0;

void count(vector<vector<int>>& v, int x, int y, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[y + i][x + j] > 1) return;
            count += v[y + i][x + j];
        }
    }
    if(count == 0) white_count++;
    else if(count == n * n) blue_count++;
    else return;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            v[y + i][x + j] = 2;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    
    int k = n;
    while(1){
        for(int i = 0; i < n; i+=k){
            for(int j = 0; j < n; j+=k){
                count(v, j, i, k);
            }
        }
        k /= 2;
        if(k <= 0) break;
    }

    cout << white_count << "\n" << blue_count;

    return 0;
}