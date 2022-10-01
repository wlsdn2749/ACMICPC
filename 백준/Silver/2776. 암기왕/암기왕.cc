#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){ 
    int N, M, T;
    int number;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> arr;
    
    cin >> T;
    for(int temp_t1=0; temp_t1<T; temp_t1++){
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> number;
            arr.push_back(number);
        }

        cin >> M;
        sort(arr.begin(), arr.end());
        for(int i=0; i<M; i++){
            cin >> number;
            cout << binary_search(arr.begin(), arr.end(), number) << "\n";
        } 
        arr.clear();
    }
}