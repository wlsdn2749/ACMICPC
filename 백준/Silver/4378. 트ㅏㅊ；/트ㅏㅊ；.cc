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

    string QWERTY = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string input;
    while(getline(cin, input)){
        for(int i=0; i<input.size(); i++){
            if(input[i] == ' '){
                cout << ' ';
                continue;
            }
            cout << QWERTY[QWERTY.find(input[i])-1];        
        }
        cout << "\n";
    }
}