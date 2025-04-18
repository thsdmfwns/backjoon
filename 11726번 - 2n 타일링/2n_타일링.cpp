/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11726                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11726                          #+#        #+#      #+#    */
/*   Solved: 2025/04/18 19:57:59 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int _count = 0;

void dfs(int n){
    if(n == 0) {
        _count ++;
        return;
    }

    if(n -1 >= 0)
        dfs(n-1);
    if(n - 2 >= 0){
        dfs(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i < 100; i++){
        _count = 0;
        dfs(i);
        cout << _count << endl;;
    }
}
