#include <iostream>
#include <vector>
#include <cstring>
int main(void){
    std::vector<int> f = {1,2,3};
    for(auto& itr: f){
        std::cout << itr <<std::endl;
        itr = 5;

    }
    a
   // ::memset(&f,3,sizeof(int)*3);
   //あい�?花�?
   //�������Ԍ�
    for(char itr: f){
        std::cout << itr <<std::endl;
    }

    return 0;
}