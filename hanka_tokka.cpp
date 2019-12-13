#include <iostream>
#include <vector>
#include <assert.h>


class ICouse{
    public:
    virtual ~ICouse(){}
    virtual void run()=0;
    virtual void init()=0;
};

class L_Couse:public ICouse{
private:
int Lval=3;
long Lnum= 11111;
public:
void run() override;
void init() override;
};

class R_Couse:public ICouse{
private:
int Rval=6;
//uint16_t Rnum = 74;
public:
void run() override;
void init() override;

};


void L_Couse::run(){
    std::cout<<"L_Couse::run()  "<<Lval<<Lnum<< std::endl;    
}

void L_Couse::init(){
    std::cout<<"L_Couse::init()  "<<Lval<<Lnum<<std::endl;    
}

void R_Couse::run(){
    std::cout<<"R_Couse::run()  "<<Rval<<std::endl;    
}

void R_Couse::init(){
    std::cout<<"R_Couse::init()  "<<Rval<<std::endl;    
}

#define RUNCOUSE L_Couse;

int main(void){
    //robocon_task
    L_Couse runCouse;
    runCouse.init();
    runCouse.run();
}
