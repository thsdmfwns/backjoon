/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 5525                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/5525                           #+#        #+#      #+#    */
/*   Solved: 2025/04/25 17:59:59 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int m;
    cin >> m;
    string s;
    cin >> s;
    int op = 0;
    int i = 1;
    int count = 0;
    while(i + 1 < m){
        if(s[i] == 'O' && s[i -1] == 'I' && s[i+1] == 'I'){
            count++;
            if(count >= n) op++;
            i += 2;
        }
        else{
            count = 0;
            i++;
        }
    }
    cout << op;
}