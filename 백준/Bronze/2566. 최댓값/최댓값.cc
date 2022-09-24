#include <iostream>
using namespace std;

int n, m, a, max_value=-1;
int main(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cin >> a;
            if (a >= max_value) {
                n = i;
                m = j; 
                max_value = a; 
            }
        }
    }
    cout << max_value << "\n" << n << " " << m;

}