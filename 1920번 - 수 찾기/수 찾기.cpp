/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 1920                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/1920                           #+#        #+#      #+#    */
/*   Solved: 2025/05/02 14:45:55 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    unordered_set<int> set(n);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        set.insert(num);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int num;
        cin >> num;
        if(set.find(num) == set.end()){
            cout << "0";
        }
        else{
            cout << "1";
        }
        cout << "\n";
    }
}