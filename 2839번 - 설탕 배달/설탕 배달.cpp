/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2839                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2839                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 14:56:30 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 5 == 0){
        cout << n/5;
        return 0; 
    }

    int num = n;
    int count = 0;
    while(num > 0){
        num -= 3;
        count++;
        if(num % 5 == 0){
            count += num/5;
            num = 0;
        }
    }
    if(num < 0){
        cout << -1;
    }
    else{
        cout << count;
    }
}