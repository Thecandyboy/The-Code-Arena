#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main(){
    

    int n;
    std::cin>>n;
    std::vector<int> sticks(n);

    for (int i=0; i<n;i++){
        std::cin>> sticks[i];
    }

    long long cost=0;
    std::vector<int> sorted_sticks = sticks;

    std::sort(sorted_sticks.begin(),sorted_sticks.end());

    bool is_even;
    is_even = (n % 2 == 0 ? true : false);

    int median;

    if (is_even){
        median = (sorted_sticks[(n-1)/2] + sorted_sticks[(n-1)/2 + 1])/2;
    } else {
        median = sorted_sticks[(n-1)/2];
    }

    for (int stick: sticks){
        cost += std::abs(median-stick);
    }
    std::cout<< cost << std::endl;

}