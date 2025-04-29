/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2609                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2609                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 17:50:57 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;

int euc(int a, int b){
    int r = a % b;
    if(r == 0){
        return b;
    }
    return euc(b, r);
}

int main(){
    int n, m;
    cin >> n >> m;
    int y = euc(n, m);
    cout << y << "\n";
    int ans = 1;
    int count = 1;
    int num = count * y;
    while(num < n * m){
        num = count * y;
        if(num % n == 0 && num % m == 0){
            ans = num;
            break;
        }
        count++;
    }
    cout << ans;
}