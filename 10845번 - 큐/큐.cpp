/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10845                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10845                          #+#        #+#      #+#    */
/*   Solved: 2025/05/02 17:24:57 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    deque<int> deq;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s == "push"){
            int num;
            cin >> num;
            deq.push_back(num);
        }
        else if(s == "pop"){
            if(deq.empty()){
                cout << -1 << "\n";
            }
            else{
                int num = deq.front(); deq.pop_front();
                cout << num << "\n";
            }
        }
        else if(s == "size"){
            cout << deq.size() << "\n";
        }
        else if(s == "empty"){
            cout << int(deq.empty())<< "\n";
        }
        else if(s == "front"){
            if(deq.empty()){
                cout << -1 << "\n";
            }
            else{
                int num = deq.front();
                cout << num << "\n";
            }
        }
        else if(s == "back"){
            if(deq.empty()){
                cout << -1 << "\n";
            }
            else{
                int num = deq.back();
                cout << num << "\n";
            }
        }
    }
    
}