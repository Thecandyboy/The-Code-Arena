#include <iostream> 
#include <string>   
#include <algorithm> 

int main() {
    std::string die; 
    std::cin >> die;
    int largest = 0;      
    char memory = '\0';  
    int current_count = 0; 

    if (die.empty()) {
        std::cout << 0 << std::endl;
        return 0;
    }
    for (char c : die) {
        if (c == memory) {
            current_count++;
        } else {
           
            largest = std::max(largest, current_count);
            current_count = 1;
            memory = c;
        }
    }
    largest = std::max(largest, current_count);
    std::cout << largest << std::endl;
    return 0;
}