/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 18111                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/18111                          #+#        #+#      #+#    */
/*   Solved: 2025/04/21 20:03:20 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<vector>
#include<limits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    size_t  b;
    cin >> n >> m >> b;

    vector<size_t> freq(257, 0);
    int min_h = 257;
    int max_h = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int h;
            cin >> h;
            freq[h]++;
            min_h = min(min_h, h);
            max_h = max(max_h, h);
        }
    }

    size_t min_time = numeric_limits<size_t>::max();
    int best_height = -1;

    for(int i = min_h; i <= max_h; i++){
        size_t remove = 0;
        size_t place = 0;
        for(int j = 0; j <= 256; j++){
            if(freq[j] == 0 ) continue;
            if(i > j) 
                place += size_t(i-j) * freq[j];
            else if(j > i) 
                remove += size_t(j-i) * freq[j];
        }
        if(remove + b < place) continue;
        size_t time = remove * 2 + place;
        if(min_time > time || (min_time == time && best_height < i)){
            min_time = time;
            best_height = i;
        }
    }
    cout << min_time << " " << best_height;
}