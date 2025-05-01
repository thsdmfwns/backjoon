/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 28702                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: thsdmfwns <boj.kr/u/thsdmfwns>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/28702                          #+#        #+#      #+#    */
/*   Solved: 2025/05/01 16:40:21 by thsdmfwns     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include<iostream>
#include<string>

using namespace std;

void print_result(int i){
    string s = "";
    if(i % 3 == 0) s+= "Fizz";
    if(i % 5 == 0) s+= "Buzz";

    if(s.empty()) cout << i << "\n";
    else cout << s << "\n";
}

int main(){
   for(int i = 0; i < 3; i++){
        string s;
        cin >> s;
        if(s == "Fizz" || s == "Buzz" || s == "FizzBuzz") continue;
        int num = stoi(s);
        print_result(num + (3 - i));
        return 0;
   }
}