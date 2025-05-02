/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10828                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10828                          #+#        #+#      #+#    */
/*   Solved: 2025/05/02 17:17:07 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "push"){
            int num;
            cin >> num;
            st.push(num);
        }
        else if( s == "pop"){
            if(st.empty()){
                cout << -1 << "\n";
            }
            else{
                int num = st.top(); st.pop();
                cout << num << "\n";
            }
        }
        else if( s == "size"){
            cout << st.size() << "\n";
        }
        else if(s == "empty"){
            int ans = st.empty() ? 1 : 0;
            cout << ans << "\n";
        }
        else if(s == "top"){
            if(st.empty()){
                cout << -1 << "\n";
            }
            else{
                int num = st.top();
                cout << num << "\n";
            }
        }
    }
}