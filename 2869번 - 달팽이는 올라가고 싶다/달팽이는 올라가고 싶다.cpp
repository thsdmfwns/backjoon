/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2869                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2869                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 18:15:36 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;
    cout << int(ceil((double(v - a) / (a - b)))) +1 ;
}
