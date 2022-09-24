#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s;
    for(int i=0; i<n; i++){
        s.push_back('*');
    }

    for(int i=0; i<n; i++ ){
        for(int j=0; j<s.size(); j++){
            cout << s[j];
        }
        s[i] = ' ';
        cout <<"\n";
    }
}