#include <iostream>
#include <vector>
#include <map>

std::vector<int> positions(std::vector<int>& numbers, int targ){
    std::vector<int> coords;
    int n = numbers.size();

    std::map<int, std::vector<int>> numindex;
    for (int i = 0; i < n; ++i) {
        numindex[numbers[i]].push_back(i);
    }

    for(int i=0;i<n-1;i++){
        int req = targ - numbers[i];
        if (numindex.count(req)){
            for (int j: numindex[req]){
                if (j != i){
                    coords.push_back(i+1);
                    coords.push_back(j+1);
                    return coords;
                }
            }
        }
    }
    return coords;
}



int main(){
    int n;
    int x;
    std::cin >> n >> x;
    std::vector<int> nums(n);

    std::map<int, std::vector<int>> numindex;
    for (int i = 0; i < n; ++i) {
        numindex[nums[i]].push_back(i);
    }

    for (int i=0; i<n;i++){
        std::cin>> nums[i];
    }
    std::vector<int> pos = positions(nums, x);
    if(pos.empty()){
        std::cout<< "IMPOSSIBLE";
    }
    else {
        for(int i=0;i<2;i++){
            std::cout<<pos[i]<< " ";
        }
        std::cout<<std::endl;
    }
}