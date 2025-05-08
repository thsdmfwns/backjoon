/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1541                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1541                           #+#        #+#      #+#    */
/*   Solved: 2025/05/07 20:44:34 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string tmp = "";
    bool f = true;
    long long ans = 0;
    for(int i = 0; i < s.size(); i++){
        char cur = s[i];
        if(cur == '+' || cur == '-'){
            if(f) ans += stoi(tmp);
            else ans -= stoi(tmp);
            tmp = "";
            if (cur == '-'){
                f = false;
            }
        }
        else{
            tmp += cur;
        }
    }
    if(f) ans += stoi(tmp);
    else ans -= stoi(tmp);
    cout << ans;
}