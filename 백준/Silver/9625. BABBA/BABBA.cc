#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int K;
    int A, B, temp;
    cin >> K;
    A = 0;
    B = 1;
    for(int i=0; i<K; i++){
        temp = A+B;
        B = A;
        A = temp;
    }
    cout << B << " " << A;
}