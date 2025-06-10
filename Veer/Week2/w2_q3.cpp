#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


    
std::vector<int> positions(const std::vector<int>& nums, int targ) {
    int n = nums.size();
    std::vector<int> coords;

    std::map<int, std::vector<int>> numindex;
    for (int i = 0; i < n; ++i) {
        numindex[nums[i]].push_back(i);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int req = targ - nums[i] - nums[j];
            if (numindex.count(req)) {
                for (int k : numindex[req]) {
                    if (k != i && k != j) {
                        coords.push_back(i+1);
                        coords.push_back(j+1);
                        coords.push_back(k+1);
                        return coords;
                    }
                }
            }
        }}

    return coords;
}




int main(){
    int n; int x;
    std::cin >> n >> x;
    std::vector<int> numbers(n);

    for (int i=0; i<n;i++){
        std::cin>> numbers[i];
    }

    std::vector<int> ps =  positions(numbers, x);
    if (ps.empty()){
        std::cout<<"IMPOSSIBLE"<<std::endl;
    } else {
        for (int i=0;i<3;i++){
        std::cout<<ps[i]<<" ";
    }
    std::cout<<std::endl;
    }
    
}