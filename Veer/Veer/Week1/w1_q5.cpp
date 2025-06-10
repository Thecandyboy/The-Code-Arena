#include <iostream>

long long algor(long long num){
    if (num % 2 == 0){
        num/=2;
    }
    else{
        num = 3*num + 1;
    }
    std::cout << num << " ";
    return num;
    }

int main(){
    long long n;
    std::cin >> n;
    std::cout<< n << " ";
    while(true){
        if (n<=1){
            break;
        }
        
        n = algor(n);
        
        if (n<=1){
            break;
        }
    }
}