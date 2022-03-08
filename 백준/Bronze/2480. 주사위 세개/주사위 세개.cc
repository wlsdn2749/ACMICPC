#include <iostream>
using namespace std;

int main() {
    int A, B ,C;
    std::cin >> A >> B >> C;
    if((A==B || A==C || B==C) && !(A==B && A==C)){
        if(A>B){
            cout << 1000 + C*100;
        }else if(B>C){
            cout << 1000 + A*100;
        }else{
            cout << 1000 + B*100;
        }

    }
    else if(A==B && A==C){
        std::cout << 10000 + A*1000;
    }
    else{
        int result;
        std::cout << ((result = (A > B ? A : B)) > C ? result : C )* 100;
    }

}
