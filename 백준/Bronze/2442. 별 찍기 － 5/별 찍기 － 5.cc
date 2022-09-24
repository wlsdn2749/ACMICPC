#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s;
    for(int i=0; i<2*n-1; i++){
        s.push_back(' ');
    }

    for(int i=0; i<n; i++ ){
        for(int k=n-i-1; k<n+i; k++){
            s[k] = '*';
        }
        for(int j=0; j<s.size(); j++){
            if(j >= s.size()/2){
                if (s[j] == ' '){
                    break;
                }
            }
            cout << s[j];
        }
        cout <<"\n";
    }
}