
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cstring>

using namespace std;

int max(int a, int b, int c){
    int max = a;
    if( b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp;
    cin >> N >> M;
    int array[1001][1001]= {0,};
    memset(array, 0, (N+1)*(M+1)*sizeof(int));

    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cin >> temp;
            array[i][j] = temp;
        }
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            array[i][j] += max(array[i-1][j], array[i-1][j-1], array[i][j-1]); 
        }
    }
    cout << array[N][M] << "\n";
}