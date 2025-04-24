/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1874                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1874                           #+#        #+#      #+#    */
/*   Solved: 2025/04/23 18:33:44 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <deque>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    deque<int> stack;
    deque<char> outputs;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int idx = 0;
    for(int i = 1; i <= n; i ++){
        stack.push_back(i);
        outputs.push_back('+');
        while(stack.back() == v[idx]){
            stack.pop_back();
            outputs.push_back('-');
            idx++;
            if(stack.empty() || idx >= n) break;
        }
    }

    while(!stack.empty()){
        if(stack.back() != v[idx]){
            cout << "NO" << "\n";
            return 0;
        }
        stack.pop_back();
        outputs.push_back('-');
        idx++;
    }

    for(char c : outputs){
        cout << c << "\n";
    }

}