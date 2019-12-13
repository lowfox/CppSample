#include <iostream>
#include <vector>
#include <assert.h>
int main(void){
    int val=0;
    std::cout<<"Hello! Assert!\n"<<std::endl;
    assert(val==0);
    std::cout<<"val==0"<<std::endl;
    assert(val!=0);
    std::cout<<"val!=0"<<std::endl;
    return 0;
}