/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10773                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10773                          #+#        #+#      #+#    */
/*   Solved: 2025/05/02 15:54:33 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<ll> st;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 0 && !st.empty()){
            st.pop();
        }
        else if(num != 0){
            st.push(num);
        }        
    }
    ll ans = 0;
    while(!st.empty()){
        int num = st.top(); st.pop();
        ans += num;
    }
    cout << ans;
}