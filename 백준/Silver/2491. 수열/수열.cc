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
    
    vector<int> arr(200001);
    int N, temp;

    cin >> N;
    for(int t=0; t<N; t++){
        cin >> temp;
        arr[t] = temp;
    }

    int inc_stack = 1;  
    int dec_stack = 1;
    int max_inc_stack = 1, max_dec_stack =1;
    for(int i=1; i<N; i++){
        if(arr[i] == arr[i-1]){
            inc_stack++;
            dec_stack++;
        }
        else if(arr[i] > arr[i-1]){
            inc_stack++;
            dec_stack = 1;
        }
        else{
            dec_stack++;
            inc_stack = 1;
        }
        if(max_dec_stack <= dec_stack)
            max_dec_stack = dec_stack;
        if(max_inc_stack <= inc_stack)
            max_inc_stack = inc_stack;
    }

    cout << (max_inc_stack > max_dec_stack ? max_inc_stack : max_dec_stack) << "\n";
    return 0;
}