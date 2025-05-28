#include <iostream>

int main(){
    int n;
    std::cin >> n;
    long long out_val = 1;
    long long nuh = 1'000'000'000 + 7;
    for (int i = 0; i<n; i++){
        out_val*=2;
        if (out_val > nuh){
            out_val = out_val % nuh;
        }
    }
    
    long long cat = out_val % nuh;
    std::cout << cat << std::endl;
}
// num * k + remainder 