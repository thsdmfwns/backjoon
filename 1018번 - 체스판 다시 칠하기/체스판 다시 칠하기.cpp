/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1018                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1018                           #+#        #+#      #+#    */
/*   Solved: 2025/05/07 16:40:16 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<string>
#include<limits>
int dx[4] = {0, 0, 1, 1};
int dy[4] = {1, -1, 0, 0};

using namespace std;

int sol(vector<string> v, int x, int y){
    int ans = numeric_limits<int>::max();
    for (int p = 0; p <= 1; p++)
    {    
        int count = 0; 
        for(int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++)
            {
                bool f = ((i+j) % 2 == 0);
                char cur_c = v[i+y][j+x];
                char expect;
                //첫수가 w
                if(p == 0){
                    expect = f ? 'W' : 'B';
                }
                //첫수가 b
                else{
                    expect = f ? 'B' : 'W';
                }

                if(cur_c != expect) count++;
            }        
        }
        ans = min(ans, count);
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int count = numeric_limits<int>::max();;
    for (int i = 0; i+8 <= n; i++)
    {
        for (int j = 0; j+8 <= m; j++)
        {
            count = min(count, sol(v, j, i));
        }
    }
    cout << count;
}