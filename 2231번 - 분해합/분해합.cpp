/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2231                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2231                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 15:33:10 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>

using namespace std;

int getcount(int n){
    int num = n;
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
    return count;
}

int getsum(int n){
    int num = n;
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num/=10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int min = n - getcount(n) * 9;
    min = max(min, 1);
    int ans = 0;
    for(int i = min; i < n; i++){
        if(i + getsum(i) == n){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}