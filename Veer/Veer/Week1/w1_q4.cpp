#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    int x;
    std::cin >> n >> x;
    std::vector<int> cutes;
    for (int i = 0; i < n; ++i) {
        int temp_num;
        if (std::cin >> temp_num) {
            cutes.push_back(temp_num);
        } 
    }
    int min_gon = 0;
    // so i have to fill in all those fat children while ensuring the weight
    /*of each gondala remains less than x*/
    /*ok heres a genius way arrange all them gonds and fill in the bags*/
    std::sort(cutes.begin(), cutes.end());

    int itr_1=0;
    int itr_2=n-1;
    int gonds = 0;
    int no_of_elements_counted = 0;
    while(no_of_elements_counted < n){
        if ( (cutes[itr_1] + cutes[itr_2]) <= x
    ){gonds++;
    itr_1++; no_of_elements_counted++;
    itr_2--; no_of_elements_counted++;
    }
    else {
        gonds++;
        itr_2--; no_of_elements_counted++;
    }
    }
    std::cout << gonds << std::endl;

}