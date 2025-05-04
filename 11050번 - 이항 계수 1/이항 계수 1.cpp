/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11050                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11050                          #+#        #+#      #+#    */
/*   Solved: 2025/05/04 19:20:53 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;
using ll = long long;

ll factorial(int n){
    int output = 1;
    for(int i = 2; i <= n; i++){
        output *= i;
    }
    return output;
}

ll sol(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << sol(n, k);
}
