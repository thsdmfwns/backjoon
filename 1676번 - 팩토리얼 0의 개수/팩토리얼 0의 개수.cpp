/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1676                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1676                           #+#        #+#      #+#    */
/*   Solved: 2025/05/04 19:19:00 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    size_t count = 0;
    while (n > 0)
    {
        n /= 5;
        count += n;
    }
    
    cout << count;
}