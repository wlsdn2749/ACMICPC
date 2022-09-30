#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int T;
    int a;
    vector<int> array;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> a;
        array.push_back(a);
    }

    for(int i=0; i<array.size(); i++){
        int result = 0;
        for(int j=1; j<array[i]; j++){
            if(array[i]%j == 0){
                result+=j; 
            }
        }
        if(result == array[i]){
            cout << "Perfect" << "\n";
        } else if ( result < array[i]){
            cout << "Deficient" << "\n";
        } else {
            cout << "Abundant" << "\n";
        }
    }
    return 0;
}