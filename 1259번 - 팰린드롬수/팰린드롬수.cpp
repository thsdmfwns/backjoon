/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1259                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1259                           #+#        #+#      #+#    */
/*   Solved: 2025/04/29 16:45:56 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        string s;
        cin >> s;
        if(s == "0") return 0;
        int st =0;
        int ed = s.size() -1;
        bool f = true;
        while(st < ed){
            if(s[st] != s[ed]){
                f = false;
                break;
            }
            st++;
            ed--;
        }
        string ans = f ? "yes" : "no";
        cout << ans << "\n";
    }
}