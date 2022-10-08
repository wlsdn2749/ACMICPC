#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int s_count=0, t_count=0;
    char c;
    string s;

    cin >> N >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 's'){
            s_count++;
        } else if(s[i] == 't'){
            t_count++;
        }
    }

    for(int i = 0; i<s.size(); i++){
        if(s_count == t_count){
            for(int j = i; j<s.size(); j++){
                cout << s[j];
            }
            break;
        }
        if(s[i] == 's') s_count--;
        if(s[i] == 't') t_count--;
    }
}