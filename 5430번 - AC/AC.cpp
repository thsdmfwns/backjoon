#include<iostream>
#include<deque>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (size_t tc = 0; tc < t; tc++)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        string cmd;
        cin >> cmd;
        int n;
        cin >> n;
        string list;     
        string tp;
        getline(cin, tp);
        getline(cin, list);
        string tmp = "";
        deque<int> deq;    
        for (int i = 0; i < list.size(); i++)
        {
            char cur = list[i];
            if(cur >= '0' && cur <= '9') tmp += cur;
            else if((cur == ',' || cur == ']') && !tmp.empty()) {
                deq.push_back(stoi(tmp));
                tmp = "";
            }
        }

        bool is_error = false;
        bool is_reverse = false;
        for (int i = 0; i < cmd.size(); i++)
        {
            char cur = cmd[i];
            if(cur == 'R') is_reverse = !is_reverse;
            else if(cur == 'D' && deq.empty()){
                is_error = true;
                break;
            }
            else if (cur == 'D') {
                if(is_reverse) deq.pop_back();
                else deq.pop_front();
            }
        }
        
        if(is_error){
            cout << "error" << "\n";
            continue;
        }        
        
        if(is_reverse){
            reverse(deq.begin(), deq.end());
        }

        cout << '[';
        while(!deq.empty()){
            int cur = deq.front(); deq.pop_front();
            cout << cur;
            if(!deq.empty()) cout << ",";
        }        
        cout << ']' << "\n";

    }
    
}