#include <iostream>
#include <vector>
int main(void){
    std::vector<int> f = {6,8,99};
    for(auto& itr: f){
        std::cout << itr <<std::endl;
        itr++;

    }
    for(auto itr: f){
        std::cout << itr <<std::endl;
    }

    return 0;
}