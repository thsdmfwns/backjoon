/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10989                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10989                          #+#        #+#      #+#    */
/*   Solved: 2025/04/29 18:25:31 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

static int v[10001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v[num]++;
    }
    for(int i = 0; i < 10001; i++){
        if(v[i] == 0 ) continue;
        for (int j = 0; j < v[i]; j++)
        {
            cout << i << "\n";
        }       
    }
    return 0;
}
