/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2108                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2108                           #+#        #+#      #+#    */
/*   Solved: 2025/04/25 16:49:37 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;


int sol_1(int hap, int n){
    double result = double(hap) / n;
    if (result < 0)
        return result - 0.5;
    return result + 0.5;
}

int sol_3(vector<int>& v_bin){
    vector<int> v;
    int max_val = *max_element(v_bin.begin() , v_bin.end());
    for(int i = 0; i <= 8000; i++){
        if(max_val == v_bin[i]) v.push_back(i);
    }
    if(v.size() == 1){
        return v[0] - 4000;
    }
    return v[1] - 4000;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    vector<int> v_bin(8001);

    int max_num = -4001;
    int min_num = 4001;
    int hap = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v2[i] = v[i];
        hap += v[i];
        max_num = max(max_num, v[i]);
        min_num = min(min_num, v[i]);
        v_bin[v[i] + 4000]++;
    }
    sort(v2.begin(), v2.end());
    cout << sol_1(hap, n) << "\n";
    cout << v2[n/2] << "\n";
    cout << sol_3(v_bin) << "\n";
    cout << max_num - min_num << "\n";
}