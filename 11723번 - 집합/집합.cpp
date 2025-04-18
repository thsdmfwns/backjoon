/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11723                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11723                          #+#        #+#      #+#    */
/*   Solved: 2025/04/17 01:52:44 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
bool map[21] = {false}; 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    size_t n;
    cin >> n;
    for(size_t i = 0; i < n; i++){
        string cmd;
        int num;
        cin >> cmd;

        if(cmd == "add"){
            cin >> num;
            map[num] = true;
        }
        else if(cmd == "remove"){
            cin >> num;
            map[num] = false;
        }
        else if(cmd == "check"){
            cin >> num;
            cout << int(map[num]) << "\n";
        }
        else if(cmd == "toggle"){
            cin >> num;
            map[num] = !map[num];
        }
        else if(cmd == "all"){
            fill(map, map+21, true);
            for(int j = 1; j <= 20; j++){
                map[j] = true;
            }
        }
        else if(cmd == "empty"){
            fill(map, map+21, true);
            for(int j = 1; j <= 20; j++){
                map[j] = false;
            }
        }
    }

    return 0;
}