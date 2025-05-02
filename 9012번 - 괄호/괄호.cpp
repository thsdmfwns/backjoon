/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 9012                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/9012                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 15:44:20 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    string s;
    getline(cin, s);
    for(int t = 0; t < tc; t++){
        stack<char> st;
        getline(cin, s);
        bool result = false;
        for(char c :  s){
            if(c == '(') st.push(c);
            else{
                if(st.empty()){
                    result = true;
                    break;
                }
                char cur = st.top(); st.pop();
                if(cur != '('){
                    result = true;
                    break;
                }
            } 
        }
        if(!st.empty()){
            result = true;
        }
        string ans = result ? "NO" : "YES"; 
        cout << ans << "\n";
    }
}