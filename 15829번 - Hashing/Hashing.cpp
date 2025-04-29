/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 15829                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/15829                          #+#        #+#      #+#    */
/*   Solved: 2025/04/29 16:20:18 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;
using ll = long long;

ll M = 1234567891;
ll R = 31;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    
    ll result = 0;
    ll pow = 1;
    for(int i = 0; i < n; i++){
        int num = (s[i] - 'a') + 1;
        result = (result + num * pow) % M;
        pow = (pow * R) % M;
    }
    cout << result;
}
