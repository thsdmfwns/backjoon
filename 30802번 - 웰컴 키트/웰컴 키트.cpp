/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 30802                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/30802                          #+#        #+#      #+#    */
/*   Solved: 2025/04/28 16:41:44 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int size[6] = {0};
    for(int i = 0; i < 6; i++){
        cin >> size[i];
    }
    int t, p;
    cin >> t >> p;

    int answer = 0;
    for(int i = 0; i < 6; i++){
        int s = size[i];
        answer += int( s / t );
        if(s % t) answer++;
    }
    cout << answer << "\n";
    cout << int(n/p) << " " << n % p;
}