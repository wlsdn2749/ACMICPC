#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> array(N+1);
    array[1] = -1;
    array[2] = 1;
    array[3] = -1;
    for(int i=4; i<=N; i++){
        array[i] = i%5 != 0 ? array[i-2] +1 : array[i-5]+1;
    }

    cout << array[N] << "\n";
}