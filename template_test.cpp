#include <iostream>
#include <vector>
int main(void){
    std::vector<int> f = {1,2,3};
    for(auto itr: f){
        std::cout << itr <<std::endl;
        itr = 2;

    }
    for(auto itr: f){
        std::cout << itr <<std::endl;
    }

    return 0;
}