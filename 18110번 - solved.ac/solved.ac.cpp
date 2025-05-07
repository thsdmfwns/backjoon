/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18110                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18110                          #+#        #+#      #+#    */
/*   Solved: 2025/05/07 19:34:46 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    size_t n;
    size_t v[31] = {0};
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }

    for (size_t i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[num]++;
    }


    size_t del_count = round(n * 0.15);
    size_t st_del = del_count;
    size_t idx = 1;
    while(st_del > 0){
        if(idx > 30){
            cout << 0;
            return 0;
        }

        if(v[idx] == 0){
            idx++;
            continue;
        }
        if(v[idx] < st_del){
            st_del = st_del - v[idx];
            v[idx] = 0;
            idx++;
            continue;
        }
        v[idx] -= st_del;
        st_del = 0;
    }

    idx = 30;
    size_t ed_del = del_count;
    while(ed_del > 0){
        if(idx < 1){
            cout << 0;
            return 0;
        }

        if(v[idx] == 0){
            idx--;
            continue;
        }
        if(v[idx] < ed_del){
            ed_del = ed_del - v[idx];
            v[idx] = 0;
            idx--;
            continue;
        }
        v[idx] -= ed_del;
        ed_del = 0;
    }

    size_t sum = 0;
    size_t count = 0;

    for (size_t i = 1; i <= 30; i++)
    {
        count += v[i];
        sum += i * v[i];
    }

    size_t ans = round((double(sum) / count));
    cout << ans;
}