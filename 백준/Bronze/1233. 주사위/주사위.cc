#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
    return a >> b;
}
int main(){
    int S1, S2, S3;
    cin >> S1 >> S2 >> S3;
    int max = S1+S2+S3;
    int result = 0;
    int max_value = 0;
    vector<int> array(max);

    for(int i=1; i<=S1; i++){
        for(int j=1; j<=S2; j++){
            for(int k=1; k<=S3; k++){
                array[i+j+k]++;
            }
        }
    }
    for(int i=0; i<array.size(); i++){
        if(max_value < array[i]){
            result = i;
            max_value = array[i];
        }
    }

    cout << result;

    
}