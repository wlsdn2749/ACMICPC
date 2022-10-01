#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){ 
    int N, M;
    int number;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> number;
        arr.push_back(number);
    }

    cin >> M;
    sort(arr.begin(), arr.end());
    for(int i=0; i<M; i++){
        cin >> number;
        cout << binary_search(arr.begin(), arr.end(), number) << " ";
    }
    
}