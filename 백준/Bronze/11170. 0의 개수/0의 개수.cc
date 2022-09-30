#include<iostream>
#include<vector>
using namespace std;

int main(){
    int T;
    int a,b;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> a >> b;
        int count =0;
        for(int j=a; j<=b; j++){
            int k = j;
            while(1){
                if(k%10 == 0){
                    count++;
                }
                k = k/10;
                if(k==0){
                    break;
                }
            }
        }
        cout << count << "\n";
    }
}