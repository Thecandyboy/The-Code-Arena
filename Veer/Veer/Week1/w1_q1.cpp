#include <iostream>
#include <vector>
#include <set>
int main(){
    int n;
    std::cin >> n;
    
    std::set<int> meinSet;
    int value;
    int count=0;
    while(std::cin >> value) {
        meinSet.insert(value);
        count++;
        if (count == n-1){
            break;
        }
    }
    for(int i=1; i<=n;i++){
        if (!meinSet.count(i)){
            std::cout << i << std::endl;
        }
    }
}