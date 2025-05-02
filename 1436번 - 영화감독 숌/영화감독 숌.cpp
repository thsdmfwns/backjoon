/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1436                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1436                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 17:38:43 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int st = 666;
    int count = 1;

    while(count < n){
        st++;
        if(to_string(st).find("666") != string::npos){
            count++;
        }
    }
    cout << st << endl;
}