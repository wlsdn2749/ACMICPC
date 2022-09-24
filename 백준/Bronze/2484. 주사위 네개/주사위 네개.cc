#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>::iterator *it;
int prize(vector<int> arr){
    int count[7] = {0,};
    int situ=0;
    int result = 0;
    vector<int> dice_value;
    for(int i=0; i<arr.size(); i++){
        count[ arr[i] ]++; // 갯수 찾기 
    }

    for(int i=1; i<=6; i++){
        if(count[i] == 2){
            if(situ == 4){
                situ = 3; // currently case 3
                dice_value.push_back(i);
            } else {
                situ = 4; // temporarily case 4
                dice_value.push_back(i);
            }
        }
        if(count[i] == 3){
            situ = 2; // same dices' value is 3 
            dice_value.push_back(i);
        }
        if(count[i] == 4){
            situ = 1; // same dices' value is 4
            dice_value.push_back(i);
        }
    }
    
    if(situ == 0) situ = 5; // all dices' values i

    switch(situ){
        case 1:
            result = dice_value[0]*5000 + 50000;
            break;
        case 2:
            result = dice_value[0]*1000 + 10000;
            break;
        case 3:
            result = dice_value[0]*500 + dice_value[1]*500 + 2000;
            break;
        case 4:
            result = dice_value[0]*100 + 1000;
            break;
        case 5:
            result = *max_element(arr.begin(), arr.end()) * 100;
            break;
    }
    return result;
}
int main(){
    int n, dice_number, max_value=-1, price_result;
    vector<int> arr;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> dice_number;
            arr.push_back(dice_number);
        }
        sort(arr.begin(), arr.end());
        price_result = prize(arr);
        max_value = price_result > max_value ? price_result : max_value ;
        arr.clear();
    }
    cout << max_value;
}