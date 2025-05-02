/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4949                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4949                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 15:11:57 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>
#include<stack>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while(1){
        string s;
        getline(cin, s);
        if(s == "."){
            return 0;
        }
        stack<char> stack;
        bool f = false;
        for(char c : s){
            if(c == '(' || c == '[') stack.push(c);
            else if(c == ')' || c == ']') {
                if(stack.empty()){  
                    f = true;
                    break;
                }
                char t = stack.top(); stack.pop();
                if((c == ')' && t != '(')
                || (c == ']' && t != '[')){
                    f = true;
                    break;
                }
            }
        }
        if(!stack.empty()) f = true;
        string ans = f ? "no" : "yes";
        cout << ans << "\n";
    }

}