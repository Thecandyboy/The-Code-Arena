#include <iostream>
#include <vector> 
#include <map>
#include <algorithm>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> songs(n);
    for (int i=0;i<n;i++){
        std::cin>> songs[i];
    }
    std::map<int,int> last_occ;
    int max=0;
    int start_index = 0;
    
    // 1 2 3 7 2 1 4 5 6 3 7 3

    for(int i=0;i<n;i++){
        int cnum = songs[i];
        // longest length = current - start index
        // update start index to last occ+1
        if (last_occ.count(cnum) && last_occ[cnum] >= start_index){
            max = std::max(max, i - start_index);
            start_index = last_occ[cnum] + 1;
        } 
        else {max = std::max(max, i - start_index+1); }
        last_occ[cnum] = i;
        
    }

    std::cout<< max << std::endl;

}